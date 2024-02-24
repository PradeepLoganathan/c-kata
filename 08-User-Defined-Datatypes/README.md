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

A structure in C is a compound data type that allows you to group variables of different types under a single name. Structures are ideal for creating records or objects that contain related data.

## Defining Structures

```C
struct Student {
    char name[50];
    int roll_no;
    float grades[5]; // Array to store grades in different subjects
};
```

## Explanation:

- struct Student { ... }; defines a new data type called "Student".
- Inside the braces, you declare member variables that represent the attributes of a student (name, roll number, grades).
- You can now create Student variables and access their members using the dot (.) operator.

## Declare a Structure Variable

Much like declaring variables of built-in types, you declare a variable of the Student type:

```C
struct Student student1; 
```

## Access and Assign Values to Members

Use the dot (.) operator to access and modify individual members of the structure

```C
strcpy(student1.name, "Alice Johnson");     // Copy the name into the structure
student1.roll_no = 25;
student1.grades[0] = 85.5;  // Assign grades for different subjects 
student1.grades[1] = 92.0;
```

## Accessing Members

You can now use student1 to represent a specific student's data

```C
printf("Student Name: %s\n", student1.name);
printf("Roll Number: %d\n", student1.roll_no);

// Example: Calculate average grade
float average = (student1.grades[0] + student1.grades[1] + ... ) / 5.0; 
```

# Unions (union)

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

An enumeration is a user-defined data type that consists of integral constants. Each element in an enumeration is assigned an integer value, starting from 0 by default.

## Defining Enumerations
```enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};```

# Type Definitions (typedef)

The typedef keyword allows you to create a new name (alias) for an existing data type. This can simplify complex type definitions and make your code more readable.

## Using typedef

```
typedef unsigned long ulong;
typedef struct Book Book;
```