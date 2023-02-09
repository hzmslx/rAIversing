from ubuntu:18.04
env LANG=C.UTF-8 LC_ALL=C.UTF-8
run apt-get update && apt-get upgrade -y
run apt-get install -y python python3 python3.8 python3-pip automake tmux redis wget autoconf sudo htop unzip git software-properties-common ca-certificates-java

#run mkdir /etc/ssl/certs/java/
run apt-get install -y openjdk-17-jdk

run python3.8 -m pip install virtualenv setuptools setuptools_rust aiohttp revChatGPT
arg USER_ID
arg GROUP_ID
run useradd -l -u $USER_ID -d /home/user user
run mkdir /home/user && chown -R user:user /home/user && echo "user ALL=(ALL) NOPASSWD: ALL" > /etc/sudoers

# Setup virtualenv
# 1. Base Python requirements
ENV WORKON_HOME=/home/user/.virtualenvs
ENV RAIVERSING=/home/user/rAIversing
run pip3 install -r /requirements.txt

run mkdir $RAIVERSING

# 2. Install emulator side of things
copy --chown=user modules $RAIVERSING/modules
copy --chown=user testing $RAIVERSING/testing
# entrypoint ["fuzzware-start-tmux-docker"]
