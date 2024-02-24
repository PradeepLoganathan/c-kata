# Introduction

C provides a set of fundamental data types like int (for integers), float (for floating-point numbers), and char (for characters). These serve as the building blocks for a wide range of programs.  However, as you tackle more complex problems, you'll often find yourself needing to represent data in ways that go beyond these basic types.

This is where user-defined data types come into play.  They empower you to design custom data structures that precisely match the requirements of your programs.  Think of them as blueprints for creating variables that can hold multiple pieces of related data under a single name.

- User-defined data types allow you to model real-world entities or abstract concepts in ways that make your code more intuitive to work with.
- They are powerful tools you can use to create custom data representations.
- They improve your code's structure by grouping related information together and making it easier to reason about.


In this section, we'll explore the following ways to create your own data types:

- Structures (struct) - For grouping variables of different types
- Unions (union) - To conserve memory or represent data in multiple ways
- Enumerations (enum) - To give meaningful names to numeric constants
- Typedefs (typedef) - To simplify complex type declarations

# Structures (struct)

## Overview
A structure in C is a compound data type that allows you to group variables of different types under a single name. Structures are ideal for creating records or objects that contain related data.

## Defining Structures

```C
struct Book {
    char title[100];
    char author[100];
    int year;
};
```

## Initializing Structures

```struct Book myBook = {"The C Programming Language", "Kernighan and Ritchie", 1978};```

## Accessing Members

```printf("Title: %s\n", myBook.title);```

# Unions (union)

## Overview
A union allows you to store different data types in the same memory location. You can define a union with many members, but only one member can contain a value at any given time.

## Defining Unions

```
union Data {
    int integer;
    float decimal;
    char character;
};
```

## Using Unions

# Enumerations (enum)

## Overview
An enumeration is a user-defined data type that consists of integral constants. Each element in an enumeration is assigned an integer value, starting from 0 by default.

## Defining Enumerations
```enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};```

# Type Definitions (typedef)

## Overview
The typedef keyword allows you to create a new name (alias) for an existing data type. This can simplify complex type definitions and make your code more readable.

## Using typedef

```
typedef unsigned long ulong;
typedef struct Book Book;
```