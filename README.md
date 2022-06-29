# INTRODUCTION
This program is a vinyl management system which allows the user to add and search storage records of music vinyls.

This program was tested on EndeavourOS, a rolling release operating system based on Arch Linux, however it should also run on machines running Microsoft Windows 10/11, Apple macOS 11 or above, and other Linux distributions such as Debian, Ubuntu, Fedora etc. given

1. The required dependencies are fulfilled
2. Some slight modifications might have to be made in the code in the event the code doesn't work.

# MINIMUM SYSTEM REQUIREMENTS

CPU: Any 5th generation Intel CPU or above, or any AMD Ryzen CPU or any Apple M series SoC (M1/M2/M1 Pro/M1 Max/M1 Ultra)

RAM: Atleast 4GB

Storage: Atleast 10MB

Operating Sysytem: Microsoft Windows 10/11, Apple macOS 11 or above, and any Linux distributions

# PRE EXECUTION SETUP
1. Linux:

On most Linux systems GCC will be preinstalled. However, if it is not installed, it can be done so using the distribution's specific package manager.

` sudo apt install gcc` (for Debian, Ubuntu and their derivatives)

`sudo dnf install gcc` (for RedHat based systems like Fedora and RHEL and derivatives)

`sudo pacman -Sy gcc` (for Arch Linux, EndeavourOS and others)

Please refer to your specific distribution's documentation for more information.

After the installation completes, run the command
`gcc -v`
in the terminal to verify the installation.

#### 2. Apple macOS

For macOS, entering `gcc` in the terminal for the first time will prompt the user to install the Developer Tools package which will install GCC. Do note that Developer Tools can take about 2GB of storage space post installation.

After the installation process, run
`gcc -v`
in the terminal to verify the installation.

Alternatively, macOS users can also refer to this guide:
https://www.freecodecamp.org/news/install-xcode-command-line-tools/

#### 3. Microsoft Windows

Windows users can refer to this guide for enabling GCC on the platform
https://code.visualstudio.com/docs/cpp/config-mingw

Alternatively, Windows users can also use the Windows Subsystem for Linux (WSL) compatibility layer to run a Linux environment inside Windows to execute the code.
https://docs.microsoft.com/en-us/windows/wsl/install

After setting up WSL, follow the Linux instructions to setup GCC.

Note: WSL by default will install an image of Ubuntu Linux, however any other Linux distribution's WSL image can be installed either through the Microsoft Store or manually using Powershell.

# EXECUTING THE PROGRAM
1. For execution of the program, click on the "Code" button at the top and select "Download as ZIP". Alternatively, if you have git set up on your system, you can use the CLI to download the files in this repository using the command
`git clone https://github.com/sr6865/Mini-Project`
2. After downloading the files, navigate to the folder and right click in an empty space in your file manager. There select the option "Open in Terminal"(macOS/Linux/Windows 11) or "Open in Powershell"(Windows 10 or older). However, you can also use your preffered IDE (Visual Studio Code, CodeBlocks etc.) to run the code, this guide shows you how to do it using the command line.
3. In the command line, type `gcc vinylmanagement.c -o vinylmgmt` to compile the "vinylmanagement.c" file into an executable "vinylmgmt" using GCC.
4. Now type `./vinylmgmt` to execute the code.

Made by Siddharth Saxena(RA2111030010029)
