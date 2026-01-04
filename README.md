# C++

This repository contains my personal study notes for C++. 
You can use this as a comprehensive guide for C++.

# Table of Contents
- [Installation](#installation)
- [Code Editors](#code-editors)
- [Hello World](#hello-world)
- [Operations](#operations)

# Installation

To be able to use the programming language C++ you need to have a compiler that
compiles C++ source code into machine code executable. 

## Windows
To install on windows:
Download `Microsoft Visual Studio IDE`. 
This will include the Microsoft Visual C++ Compiler (MSVC).

## MacOS
To install on macos:
You can install the Apple LLVM `clang` compiler. Enter command into the terminal to install:
```bash
xcode-select --install
```

## Linux
To install on linux:
You can install the GNU Compiler Collection (GCC) through your distribution's package manager.
- Ubuntu, Debian and derivatives:
```bash
sudo apt-get install g++ build-essential
```
- Fedora, CentOS, RHEL, and derivatives:
```bash
sudo dnf install gcc-c++ make
```
- Arch Linux and derivatives:
```bash
sudo pacman -S gcc make
```
Enter command into the terminal to check:
```bash
g++ --version
```

# Code Editors
Here are popular code editors and IDEs for C++:
- Visual Studio: Visual Studio is an Integrated Development Environment (IDE) for Windows, developed by Microsoft. It includes its own integrated compiler known as Microsoft Visual C++ (MSVC).
- Visual Studio Code (VSCode): Visual Studio Code is a popular, free, open-source, and lightweight code editor developed by Microsoft. It offers an extensive library of extensions that enhance functionality for C++ development.
- Sublime Text: Sublime Text is a cross-platform text editor that is quite popular among developers due to its speed and minimalist design. It supports C++ with the help of plugins and has a variety of themes and packages available for customization.
- CLion: CLion is an Integrated Development Environment (IDE) developed by JetBrains specifically for C and C++ developers. It provides advanced features like code completion, refactoring support, debugging, and more. It's worth noting that CLion is a commercial IDE, but there is community version available.

# Hello World

[hello-world.cpp](./hello-world.cpp)
```cpp
#include <iostream>

int main() {
  std::cout << "Hello, World!\n";
  return 0;
}
```

Compile the program
```bash
clang++ hello-world.cpp
```
This will create an executable file `a.out`

Execute the program
```bash
./a.out
```

Breakdown of program:
- `#include <iostream> - Header files and preprocessing directives
- `main()` - Entry point into the program.
- `std::cout` - Output to the terminal
- `return` - Return statement

# Operations

## Arithmetic Operators
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*) 
4. Division (/)
5. Modulo (%)
6. Increment (++)
7. Decrement (--)

[arithmetic.cpp](./arithmetic.cpp)

## Types of Operators
- Unary operator
- Binary operator
- Ternary operator

## Relational Operators
- Equal to (==)
- Not equal to (!=)
- Greater than (>)
- Less than (<)
- Greater than or equal to (>=)
- Less than or equal to (<=)

[relational.cpp](./relational.cpp)

## Logical Operators
- AND (&&)
- OR (||)
- NOT (!)

[logical.cpp](./logical.cpp)

## Bitwise Operators
- Bitwise AND (&)
- Bitwise OR (|)
- Bitwise XOR (^)
- Bitwise Left Shift (<<)
- Bitwise Right Shift (>>)
- Bitwise NOT (~)

[bitwise.cpp](./bitwise.cpp)

## Assignment Operators
- Assignment (=)
- Add and assignment (+=)
- Subtract and assignment (-=)
- Multiply and assignment (*=)
- Division and assignment (/=)

[assignment.cpp](./assignment.cpp)

## Ternary Operators
The structure of a ternary operator or conditional:
```
Expression1 ? Expression2 : Expression3
```

## Miscellaneous Operators
1. Size operator `sizeof`
```cpp
sizeof(char)
```
2. Comma operator `,`
```
int a, b, c;
```
3. Address operator `&`
```
&var
```
4. Dot operator `.`
```
object.property
```
5. Arrow operator `->`
```
pointer -> property
```
6. Casting operator `( )`
```
(int)x
```
