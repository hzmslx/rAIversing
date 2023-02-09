#!/bin/bash
DIR="$(dirname "$(readlink -f "$0")")"
COMMIT=""


# Choose a user id for the user created in the image
# a) Use user id from invoking user
user_id=$(id -u)
group_id=$(id -g)
if [[ $user_id -eq 0 || $group_id -eq 0 ]]; then
    # b) If root is invoking, try the sudoing user
    user_id=$SUDO_UID
    group_id=$SUDO_GID
    if [[ ! -z $user_id ]]; then
        echo "Using sudoing user's id to build container"
    else
        # c) If this fails, try the user owning the dockerfile
        user_id=$(stat -c "%U" $DIR/dockerfile)
        group_id=$(stat -c "%G" $DIR/dockerfile)
        if [[ $user_id -eq 0 || $group_id -eq 0 ]]; then
            # d) Everything is root owned, default to user 1000
            user_id=1000
            group_id=1000
            echo "Could not derive non-root user id from invoking user or ownership, defaulting to $user_id:$group_id"
        fi
    fi
fi
if [[ ! -z "$COMMIT" ]]; then
echo "Building docker image: $COMMIT"
docker build -t "raiversing:$COMMIT" \
    --build-arg USER_ID=$user_id \
    --build-arg GROUP_ID=$group_id \
    "$DIR"
else
docker build -t "raiversing:latest" \
    --build-arg USER_ID=$user_id \
    --build-arg GROUP_ID=$group_id \
    "$DIR"
fi