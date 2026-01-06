# C++

This repository contains my personal study notes for C++. 
You can use this as a comprehensive guide for C++.

[Summary](./SUMMARY.md)

# Table of Contents
- [Installation](#installation)
- [Code Editors](#code-editors)
- [Hello World](#hello-world)
- [Operations](#operations)
    - [Arithmetic Operators](#arithmetic-operators)
    - [Types of Operators](#types-of-operators)
    - [Relational Operators](#relational-operators)
    - [Logical Operators](#logical-operators)
    - [Bitwise Operators](#bitwise-operators)
    - [Assignment Operators](#assignment-operators)
    - [Ternary Operators](#ternary-operators)
    - [Miscellaneous Operators](#miscellaneous-operators)
- [Control Structures and Statements](#control-structures-and-statements)
    - [If Else Statement](#if-else-statement)
    - [Switch Statement](#switch-statement)
    - [Goto](#goto)
    - [For Loop](#for-loop)
    - [Do While Loop](#do-while-loop)
    - [While Loop](#while-loop)
- [Function](#function)
- [Function Prototype](#function-prototype)
- [Operator Overloading](#operator-overloading)
- [Lambdas](#lambdas)
- [Static Polymorphism](#static-polymorphism)
    - [Function Overloading](#function-overloading)
    - [Templates](#templates)
- [Data Types](#data-types)
    - [Static Typing](#static-typing)
    - [Dynamic Typing](#dynamic-typing)
    - [Run-Time Type Identification](#run-time-type-identification)
- [Pointers and References](#pointers-and-references)
    - [Pointers](#pointers)
    - [References](#references)
    - [Constant Pointers](#constant-pointers)
    - [Pointer to Constant](#pointer-to-constant)
    - [Constant Pointer to Constant](#constant-pointer-to-constant)
    - [Constant Pointers and Pointers to Constants Summary](#constant-pointers-and-pointers-to-constants-summary)
    - [Memory Model](#memory-model)
    - [Lifetime of Objects](#lifetime-of-objects)
    - [Smart Pointers](#smart-pointers)
        - [Unique Pointer](#unique-pointer)
        - [Shared Pointer](#shared-pointer)
        - [Weak Pointer](#weak-pointer)
    - [Raw Pointer](#raw-pointer)

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
- Visual Studio
- Visual Studio Code (VSCode)
- Sublime Text
- CLion

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
- `#include <iostream>` - Header files and preprocessing directives
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

# Control Structures and Statements

## If Else Statement
```
if (condition1) {
    block of code to execute 
} 
else if (condition2) {
    block of code to execute
} 
else {
    block of code to execute 
}
```
[if-else.cpp](./if-else.cpp)

## Switch Statement
```
switch (variable) {
    case value1: 
        block of code to execute
        break;
    case value2: 
        block of code to execute
        break;
    case value3:
        block of code to execute
        break;
    default:
        block of code to execute
}
```
[switch.cpp](./switch.cpp)

## Goto
```
if (condition) {
    goto label;
}

block of code to execute

label:
    block of code to execute
```
[goto.cpp](./goto.cpp)

## For Loop
```
for (initialization; condition; increment/decrement) {
    block of code to execute
}
```
[for-loop.cpp](./for-loop.cpp)

## While Loop
```
while (condition) {
    block of code to execute
}
```
[while-loop](./while-loop.cpp)

## Do While Loop
```
do {
    block of code to execute
} while (condition);
```
[do-while-loop.cpp](do-while-loop.cpp)

# Function

There are two types of functions:
- Standard library functions; and
- User-defined functions.

Here is the structure of a function:
```
return_type function_name(parameter list) {
    function body
}
```
[function.cpp](./function.cpp)

# Function prototype
A function prototype is a declaration of a function without its body.
The purpose of a function prototype is to be able to access the function 
before it is defined.
[function-prototype.cpp](./function-prototype.cpp)

# Operator Overloading
Operator overloading is a feature that allows you to redefine operators for user defined types such as classes and structs.
Use `operator` keyword.

[operator-overloading.cpp](./operator-overloading.cpp)

# Lambdas

Here is the structure of a lambda function:
```cpp
[capture-list](parameters) -> return_type {
    // function body
};
```

**Usage Examples**

Lambda function with no capture, parameters, or return type.
```cpp
auto printHello = []() {
    std::cout << "Hello, World!\n";
};
printHello(); // Output: Hello, World!
```

Lambda function with parameters.
```cpp
auto add = [](int a, int b) {
    return a + b;
};
int result = add(3, 4); // result = 7
```

Lambda function with capture-by-value.
```cpp
int multiplier = 3;
auto times = [multiplier](int a) {
    return a * multiplier;
};
int result = times(5); // result = 15
```

Lambda function with capture-by-reference.
```cpp
int expiresInDays = 45;
auto updateDays = [&expiresInDays](int newDays) {
    expiresInDays = newDays;
};
updateDays(30); // expiresInDays = 30
```
[lambdas.cpp](./lambdas.cpp)

# Static Polymorphism
There are two ways of using static polymorphism in the C++ Programming Language:
- Function Overloading
- Templates

## Function Overloading
Function with the same name but different parameter types or number of 
parameters.
```
#include <iostream>

void print(int i) {
    std::cout << "Printing int: " << i << '\n';
}

void print(double d) {
    std::cout << "Printing double: " << d << '\n';
}

void print(const char* s) {
    std::cout << "Printing string: " << s << '\n';
}

int main() {
    print(5);          // Calls print(int i)
    print(3.14);       // Calls print(double d)
    print("Hello");    // Calls print(const char* s)

    return 0;
}
```

## Templates
Generic functions or classes.
```
#include <iostream>

// Template function to print any type
template<typename T>
void print(const T& value) {
    std::cout << "Printing value: " << value << '\n';
}

int main() {
    print(42);           // int
    print(3.14159);      // double
    print("Hello");      // const char*

    return 0;
}
```

# Data Types
Here are the fundamental data types:

- Integer (int): Whole numbers both positive and negative.

```cpp
int num = 42;
```

- Floating-Point (float, double): Real numbers with a decimal point.

```cpp
float pi = 3.14f;
```

```cpp
double pi_high_precision = 3.1415926535;
```
- Character (char): A single digit, letter or symbol.

```cpp
char letter = 'A';
```
- Boolean (bool): A logical value for 1 = true and 0 = false.

```cpp
bool is_cpp_great = true;
```

Here are the derived data types:

- Arrays: Used to store multiple values of the same data type.

```cpp
int numbers[5] = {1, 2, 3, 4, 5};
int scores[10] = {100,95,98}; // Partially initialized array. 100,95,98 initialized on first 3 indexes, rest indexes are initialized with 0
int allZero[0] = {0};         // initialized all to zero 
```

- Pointers: Used to store memory address of a variable.

```cpp
int num = 42;
int* pNum = &num;
```

- References: A way to share memory locations.

```cpp
int num = 42;
int& numRef = num;
```

Here are the user-defined data types:

- Structures (struct): Used to store related variables and methods in public.

```cpp
struct Person {
    std::string name;
    int age;
    float height;
};

Person p1 = {"John Doe", 30, 5.9};
```

- Classes (class): Similar to a struct but can define access modifiers.

```cpp
class Person {
public:
    std::string name;
    int age;

    void printInfo() {
        std::cout << "Name: " << name << ", Age: " << age << '\n';
    };
};

Person p1;
p1.name = "John Doe";
p1.age = 30;
```

- Union (unions): Unions are used to store data types in the same memory 
location.

```
union Data {
    int num;
    char letter;
    float decimal;
};

Data myData;
myData.num = 42;
```

## Static Typing
Static typing means that the variables type is determined at compile time.

C++ is a statically-typed programming language which means it uses static typing to determine data types and performs type checking during compile time.

[static-typing.cpp](./static-typing.cpp)

## Dynamic Typing
Dynamic typing means that the variables type is determined at run time.

There are two ways to use dynamic typing:
- `void*` Pointers: a generic pointer that can point to objects of any data 
type.

[void-star-pointers.cpp](./void-star-pointers.cpp)

- `std::any` (C++17): A generalised type-safe container for single values of any type.

[std-any.cpp](./std-any.cpp)

# Run Time Type Identification

There are two operators for RTTI:
- `typeid` operator
- `dynamic_cast` operator

## Type Id Operator
`typeid` is an operator that returns a reference to an object of type `std::type_info`, which contains information about the type of the object. The header file `<typeinfo>` should be included to use typeid.

[type-id.cpp](./type-id.cpp)

## Dynamic Cast Operator
`dynamic_cast` is a `type-casting` operator that performs a runtime type check and safely downcasts a base pointer or reference to a derived pointer or reference. It returns null or throws a `bad_cast` exception (if casting references) when the casting fails.

[dynamic-cast.cpp](./dynamic-cast.cpp)

# Pointers and References

## Pointers

A pointer is a variable that stores the memory address of another variable.

Declaration of a pointer:
```
dataType *pointerName;
```

Initialisation of a pointer:
```
int num = 10;
int *ptr = &num;  // Pointer 'ptr' now points to the memory address of 'num'
```

Accessing value of a pointer:
```
int value = *ptr; // Value now contains the value of the variable that 'ptr' points to (i.e., 10)
```

Function pointer:
```
int add(int a, int b)
{
  return a + b;
}

int main()
{
  int (*funcptr) (int, int) = add; // Pointer 'funcptr' now points to the functions 'add'
  funcptr(4, 5); // Return 9
}
```

## References

A reference is an alias for an existing variable. It is a different name for the same memory location.

Declaration of a reference:
```
dataType &referenceName = existingVariable;
```

Initialisation of a reference:
```
int num = 10;
int &ref = num; // Reference 'ref' is now an alias of 'num'
```

Function parameters:
```cpp
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
   int x = 5, y = 10;
   std::cout << "Before Swap: x = " << x << " y = " << y << '\n'; // Outputs 5 10
   
   swap(x, y);
   std::cout << "After Swap: x = " << x << " y = " << y << '\n';  // Outputs 10 5
}
```

References in range based for loops:
```cpp
std::vector<std::string> stooges {"xyz", "abc", "def"};

// Read-only, no copies
for (auto const &str : stooges)
    std::cout << str << std::endl;

// Makes a copy of each string
for (auto str : stooges)
    std::cout << str << std::endl;

// Direct reference, can modify original elements
for (auto &str : stooges)
    str += "!";

// Makes a copy of each string, but prevents modification of the copy
for (const auto str : stooges)
    std::cout << str << std::endl;
```

Summary:
- Use `auto const &` for **read-only access** (best efficiency).
- Use `auto &` when you need to **modify elements in place**.
- Use `auto` when you need a **mutable copy**.
- Use `const auto` when you want a **read-only copy** inside the loop to prevent accidental modification.

## Constant Pointer

A constant pointer is a pointer that cannot change the address it holds after intialisation.

```cpp
int x = 10;
int y = 20;
int* const ptr = &x;   // Constant pointer to int

*ptr = 15;             // Allowed: we can change the value of x
// ptr = &y;           // Error: cannot make ptr point to y
```

Rule:
- You cannot change what it points to.
- You can change the value at the address.

## Pointer to Constant
A pointer to constant is a pointer that can change what address it points to but the value at that address cannot be changed.

```cpp
int x = 10;
int y = 20;
const int* ptr = &x;   // Pointer to constant int

// *ptr = 15;          // Error: cannot modify x through ptr
ptr = &y;              // Allowed: can point to another variable
```

Rule:
- You can change what it points to.
- You cannot change the value at the address through this pointer.

## Constant Pointer to Constant
A constant pointer to constant is a pointer that cannot change what address it points to and cannot change the value at that address.

```cpp
int x = 10;
int y = 20;
const int* const ptr = &x;   // Constant pointer to constant int

// *ptr = 15;                // Error: cannot modify x
// ptr = &y;                 // Error: cannot make ptr point to y
```

Rule:
- You cannot change what it points to.
- You cannot change the value at the address through this pointer.

## Constant Pointers and Pointers to Constants Summary
- `int* const ptr`: constant pointer, mutable pointee
- `const int* ptr`: mutable pointer, constant pointee
- `const int* const ptr`: constant pointer, constant pointee

## Memory Model

Stack memory is used for automatic storage duration variables, such as local variables and function call data. Stack memory is managed by the compiler, and it's allocation and deallocation are done automatically. The stack memory is also a LIFO (Last In First Out) data structure, meaning that the most recent data allocated is the first to be deallocated.

```cpp
void functionExample() {
    int x = 10; // x is stored in the stack memory
}
```

Heap memory is used for dynamic storage duration variables, such as objects created using the new keyword. The programmer has control over the allocation and deallocation of heap memory using new and delete operators. Heap memory is a larger pool of memory than the stack, but has a slower access time.

```cpp
void functionExample() {
    int* p = new int; // dynamically allocated int in heap memory
    *p = 10;
    // more code
    delete p; // deallocate memory
}
```

The Data segment is composed of two parts: the initialized data segment and the uninitialized data segment. The initialized data segment stores global, static, and constant variables with initial values, whereas the uninitialized segment stores uninitialized global and static variables.

```cpp
// Initialized data segment
int globalVar = 10; // global variables
static int staticVar = 10; // static local variables
const int constVar = 10; // constant variables with value

// Uninitialized data segment
int globalVar; // uninitialized global variables
```

The Code segment (also known as the Text segment) stores the executable code (machine code) of the program. It's usually located in a read-only area of memory to prevent accidental modification.

```cpp
void functionExample() {
    // The machine code for this function is stored in the code segment.
}
```

## Lifetime of Objects

Static Storage Duration: Objects with static storage duration exist for the entire run of the program. These objects are allocated at the beginning of the program's run and deallocated when the program terminates. Global variables, static data members, and static local variables fall into this category.

```cpp
int global_var;            // Static storage duration
class MyClass {
  static int static_var;   // Static storage duration
};
void myFunction() {
  static int local_var;    // Static storage duration
}
```

Thread Storage Duration: Objects with thread storage duration exist for the lifetime of the thread they belong to. They are created when a thread starts and destroyed when the thread exits. Thread storage duration can be specified using the `thread_local` keyword.

```cpp
thread_local int my_var;   // Thread storage duration
```

Automatic Storage Duration: Objects with automatic storage duration are created at the point of definition and destroyed when the scope in which they are declared is exited. These objects are also known as "local" or "stack" objects. Function parameters and local non-static variables fall into this category.

```cpp
void myFunction() {
  int local_var;           // Automatic storage duration
}
```

Dynamic Storage Duration: Objects with dynamic storage duration are created at runtime, using memory allocation functions such as new or malloc. The lifetime of these objects must be managed manually, as they are not automatically deallocated when the scope is exited. Instead, it is the programmer's responsibility to destroy the objects using the delete or free functions when they are no longer needed, to avoid memory leaks.

```cpp
int* ptr = new int;        // Dynamic storage duration
delete ptr;
```

## Smart Pointers

A smart pointer is a wrapper for a raw pointer that adds features like automatic memory management, preventing leaks by deleting the pointed-to object when it's no longer needed.

### Unique Pointer
`unique_ptr` is a smart pointer that manages a dynamically allocated object, and it was introduced in C++11. It is defined in the `<memory>` header file. Here are the key points about `unique_ptr`:
- Ownership: `unique_ptr` owns the object it points to. Only one `unique_ptr` can own an object at a time.
- Move Semantics: Since only one `unique_ptr` can own an object, it cannot be copied. However, it can be transferred (moved) from one `unique_ptr` to another using move semantics (std::move).
- Memory Management: `unique_ptr` automatically deletes the object it points to when it goes out of scope, so there's no need to manually call delete.

### Shared Pointer
Shared pointers are objects which store pointers to dynamically allocated (heap) objects. They behave much like built-in C++ pointers except that they automatically delete the object pointed to at the appropriate time. Shared pointers are particularly useful in the face of exceptions as they ensure proper destruction of dynamically allocated objects. They can also be used to keep track of dynamically allocated objects shared by multiple owners.

### Weak Pointer
The `weak_ptr` is one of the smart pointers that provide the capability of a pointer with some reduced risks as compared to the raw pointer. The `weak_ptr`, just like `shared_ptr` has the capability to point to the resource owned by another `shared_ptr` but without owning it. In other words, they are able to create a non-owning reference to the object managed by `shared_ptr`.

## Raw Pointer
A raw pointer is a variable that stores a direct memory address, giving low-level access to data, but unlike safer "smart pointers," it lacks automatic memory management, meaning developers must manually handle allocation and deallocation to prevent memory leaks or dangling pointers, making them powerful but risky. They are "raw" because they offer no built-in lifetime guarantees or safety checks, requiring careful use to avoid undefined behavior. 


