import os

path = f' {os.path.dirname(os.path.abspath(__file__))}'
dir_that_does_not_exist = os.path.join(path, "dir_that_does_not_exist")

def main():
    print(dir_that_does_not_exist)
    if os.path.exists(dir_that_does_not_exist):
        print("WORKS")
        #Some potentialy mallicious code
    else:
        print("DOES NOT WORK")
        #this should be executed



if __name__ == "__main__":
    main()
