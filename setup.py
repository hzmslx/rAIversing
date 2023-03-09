from rAIversing.pathing import *
import os, sys

def setup_test_binaries_p2im():

    #clone repository and pull latest changes
    if not os.path.exists(f"{TESTING_ROOT}/p2im-real_firmware"):
        os.system(f"git clone https://github.com/RiS3-Lab/p2im-real_firmware.git {TESTING_ROOT}/p2im-real_firmware")
    else:
        os.system(f"cd {TESTING_ROOT}/p2im-real_firmware && git pull")

    #copy usable binaries from p2im-real_firmware/binary to testing/samples/binaries/p2im
    if not os.path.exists(f"{BINARIES_ROOT}/p2im"):
        os.mkdir(f"{BINARIES_ROOT}/p2im")
        os.system(f"cp {TESTING_ROOT}/p2im-real_firmware/binary/* {BINARIES_ROOT}/p2im")

    #strip binaries
    for binary in os.listdir(f"{BINARIES_ROOT}/p2im"):
        binary_path = f"{BINARIES_ROOT}/p2im/{binary}"
        os.system(f"arm-none-eabi-strip --strip-all {binary_path}")


def main():
    setup_test_binaries_p2im()


if __name__ == "__main__":
    main()