// Installation of VS Code

// Open a web browser and go to the official website: https://code.visualstudio.com

// Download Visual Studio Code for your operating system (Windows/Linux/Mac).

// Run the installer and follow the on-screen instructions.

// During installation (Windows), check:

// ✔ Add to PATH

// ✔ Register Code as an editor for supported file types

// Complete the installation and launch VS Code.

// Installation of GCC Compiler
// For Windows (using MinGW)

// Download MinGW from: https://www.mingw-w64.org

// Install MinGW and select gcc (C compiler) during setup.

// Copy the MinGW bin path (example):
// C:\MinGW\bin

// Add this path to Environment Variables → PATH.

// Verify installation:

// gcc --version

// For Linux
// sudo apt install gcc

// For macOS
// xcode-select --install

// Execution of First C Program

// Open VS Code.

// Create a new file and save it as hello.c.

// Write the following C program:

#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}

// Open Terminal in VS Code (Ctrl + ).

// Compile the program:
// gcc hello.c -o hello

// Run the program:
// ./hello