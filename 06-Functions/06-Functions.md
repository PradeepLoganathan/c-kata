# Functions

Functions in C are blocks of code that perform specific tasks and can be called from other parts of your program. This modular approach allows for code reuse, better organization, and easier debugging. In this section, we'll cover how to define and use functions, including passing arguments and returning values.

# Defining a Function

A function in C is defined with a specific return type, a name, and optionally a list of parameters. The basic syntax is:

```c
returnType functionName(parameterType1 parameter1, parameterType2 parameter2, ...) {
    // Function body
    // Code to execute when the function is called
}
```

- returnType is the type of value the function returns. If the function does not return a value, void is used.
- functionName is the name of the function.
- parameterType and parameter define the type and name of each parameter passed to the function. Parameters are optional; a function may have none.

# Calling a Function

You call a function by using its name followed by parentheses. If the function requires parameters, you pass them inside the parentheses.

```functionName(argument1, argument2, ...);```

# Passing Arguments to Functions
Arguments can be passed to functions by value or by reference:

- By Value: The actual value is passed. Changes made to the parameter inside the function do not affect the argument.
- By Reference: The address of the variable is passed. Changes made to the parameter affect the argument.

# Returning Values from Functions

A function can return a value. The return statement is used to return a value from a function. The type of the return value must match the function's return type.

# Function Prototypes

A function prototype is a declaration of a function that specifies the function's name, return type, and parameters (if any) but does not include the function body. It's usually placed at the beginning of a file or in a header file.

# Function libraries

Function libraries are collections of pre-written, thoroughly tested functions designed to perform common tasks or operations. Think of them as toolboxes of code that you can use in your own programs.

## Types of function libraries:

- Standard C Library: This library comes built-in with C compilers and provides core functionality:
    - Input/Output (printf, scanf)
    - String manipulation (strcpy, strlen)
    - Mathematical operations (sqrt, pow, sin, cos)
    - Memory management (malloc, free)
    - And many more!
- Custom Libraries: Programmers can create their own libraries containing functions specific to their projects or needs.
- Third-Party Libraries: A vast ecosystem of external libraries developed by others exists for tasks such as graphics, networking, data science, game development, and more.

## Including Libraries:

To use functions from a library, you need to include the appropriate header file with the ```#include``` directive as below

```C
#include <stdio.h>  // For standard input/output
#include <math.h>   // For mathematical functions
```

## Advantages of Function Libraries

- Code Reusability: Avoid reinventing the wheel! Write code once, and reuse it across many programs.
- Efficiency: Library functions are generally optimized for performance.
- Reliability: These functions have been extensively tested, reducing the chances of bugs in your own code.
- Modularity: Libraries help organize code and promote better project structure

## Exploring the Standard C Library

Let's write a small program to showcase a few useful functions:

```C
#include <stdio.h>
#include <math.h>
#include <ctype.h>  // For character functions

int main() {
    char initial = 'a';
    double num = 3.14159;

    printf("Square root of %.2f: %.2f\n", num, sqrt(num)); //sqrt function from math.h
    printf("Uppercase of '%c': '%c'\n", initial, toupper(initial)); //toupper function from ctype.h

    return 0;
}
```

This program does the following 
- Headers: We include stdio.h, math.h, and ctype.h.
- sqrt(num): Calculates the square root of a number (math.h).
- toupper(initial) Converts a lowercase character to uppercase (ctype.h).

# Samples to demonstrate functions

## Shape Calculator

This program provides a simple menu-driven interface that allows users to calculate the area and perimeter of various shapes (circles, rectangles, and triangles).

### Code Structure

- Include Headers: Include the necessary headers
```#include <stdio.h>```. 
Includes the standard input/output library for user interaction.

### Function Prototypes

Declares the calculation functions before their definitions. This allows the compiler to be aware of them earlier in the program.

### main function

- Menu: Displays a list of shape options.
- Input: Prompts the user for their choice and any necessary dimensions.
- switch statement: Executes the appropriate code block based on the user's choice. Calls the shape-specific calculation functions and displays the results.

### Calculation functions

Each function takes the relevant dimensions as parameters and performs the corresponding area or perimeter calculation. They return the calculated result.

### Instructions: Compile and Run

- Save the Code: Create a new file named shape_calculator.c and paste the code into it.

- Compilation: Use the GCC compiler to compile the code:```gcc shape-calculator.c -o shape-calculator```. This will create an executable file named shape-calculator.

- Run the Program: Execute the compiled program by typing:```./shape-calculator```

## Temperature Converter

we'll write a program that converts temperatures between Fahrenheit and Celsius. We'll create two functions: one for converting Fahrenheit to Celsius and another for converting Celsius to Fahrenheit.

### Explanation

- Function Declarations: Before main, we declare two functions, fahrenheitToCelsius and celsiusToFahrenheit, which take a double as an argument and return a double. This informs the compiler about the existence of these functions before their actual implementation.

- Function Definitions: After main, we define what each function does. fahrenheitToCelsius takes a Fahrenheit temperature, converts it to Celsius, and returns the result. Similarly, celsiusToFahrenheit takes a Celsius temperature, converts it to Fahrenheit, and returns the result.

- Main Function: It prompts the user to choose the type of conversion, reads the user's input, calls the appropriate conversion function, and prints the result.

### Compiling and Running
To compile and run this program:

- Save the code in a file, for example, temperature_conversion.c.
- Compile it using GCC: ```gcc temperature_conversion.c -o temperature_conversion```.
- Run the compiled program: ```./temperature_conversion```.