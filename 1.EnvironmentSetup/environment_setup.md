# Setting up a C++ development environment
To start developing software with C++ you'd need some software and tool that will make this task possible and will help you in the task a great deal. This guide assumes you are using a Windows Operating System. 

## Install an IDE
IDE stands for Integrated Development Environment; you can think on it as a text editor especially capable to assist writing code and offers integrations with the specific tool used for programming language. 
To keep things simple this guide recommends installing Visual Studio Code. You can download in the following URL: 
https://code.visualstudio.com/download
Although this guide assumes Windows, you'll find there versions of Visual Studio Code for other Operating Systems too. 
Download and follow the instructions shown in the installation process if any or in the website. 

## Configuring Visual Studio Code to develop with C++
As is, Visual Studio Code is a very capable text editor for writing code in a variety of languages but there are some extensions that will make it even better and are arguably required.

Install the C/C++ extension for VS Code. You can install the C/C++ extension by searching for 'c++' in the Extensions view (Ctrl+Shift+X).

![cpp-extension](../static/img/cpp-extension.png)

# Install GCC compiler for Windows:

1. Get the latest version of Mingw-w64 via MSYS2, which provides up-to-date native builds of GCC, Mingw-w64, and other helpful C++ tools and libraries. You can download the latest installer from the MSYS2 page or use this link to the installer.

1. Follow the Installation instructions on the MSYS2 website to install Mingw-w64. Take care to run each required Start menu and pacman command.

2. Install the Mingw-w64 toolchain:

```bash
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```

Run the pacman command in a MSYS2 terminal. Accept the default to install all the members in the toolchain group.

3. Add the path to your Mingw-w64 bin folder to the Windows PATH environment variable by using the following steps:

    1. In the Windows search bar, type 'settings' to open your Windows Settings. 
    2. Search for Edit environment variables for your account. 
    3. Choose the Path variable in your User variables and then select Edit. 
    4. Select New and add the Mingw-w64 destination folder path to the system path. The exact path depends on which version of Mingw-w64 you have installed and where you installed it. If you used the settings above to install Mingw-w64, then add this to the path: C:\msys64\mingw64\bin. 
    5. Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available.
    
## Check your MinGW installation

To check that your Mingw-w64 tools are correctly installed and available, open a new Command Prompt and type:

```
C:\> gcc --version
C:\> g++ --version
C:\> gdb --version
```