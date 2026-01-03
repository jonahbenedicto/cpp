# Introduction to the C++ Programming Language

## Including Libraries
Use `#include` to include library.
Use `iostream` library for input and output stream.

## Main Function
Use the `main` function as the main entry point into the program.

## Input and Output
Use `std:cin` for input and `std:cout` for output available in the `iostream` library.

## Variables and Data Types
Variables must be declared with a data type.
Here are the data types that can be used.
- `int`: integer values
- `float`: single-precision floating-point values
- `double`: double-precision floating-point values
- `char`: single characters
- `bool`: boolean values

```cpp
int x;
float y;
double z;
char c;
bool b;
```

## Control Structures

### If Else Statements
```cpp
if (condition) {
    // Code to execute if the condition is true
} else {
    // Code to execute if the condition is false
}
```

### While Loop
```cpp
while (condition) {
    // Code to execute while the condition is true
}
```

### For Loop
```cpp
for (initialization; condition; update) {
    // Code to execute while the condition is true
}

### Switch Statement
```cpp
switch (variable) {
    case value1:
        // Code to execute if variable == value1
        break;
    case value2:
        // Code to execute if variable == value2
        break;
    // More cases...
    default:
        // Code to execute if variable does not match any case value
}
```

## Functions
```cpp
ReturnType functionName(ParameterType1 parameter1, ParameterType2 parameter2) {
    // Function body
    return returnValue;
}
```
