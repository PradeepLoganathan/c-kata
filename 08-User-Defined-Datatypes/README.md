# Introduction

C provides a set of fundamental data types like int (for integers), float (for floating-point numbers), and char (for characters). These serve as the building blocks for a wide range of programs.  However, as you tackle more complex problems, you'll often find yourself needing to represent data in ways that go beyond these basic types.

This is where user-defined data types come into play.  They empower you to design custom data structures that precisely match the requirements of your programs.  Think of them as blueprints for creating variables that can hold multiple pieces of related data under a single name. User-defined data types allow you to model real-world entities or abstract concepts in ways that make your code more intuitive to work with. They are powerful tools you can use to create custom data representations. They improve your code's structure by grouping related information together and making it easier to reason about.


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
## Key Points

- Memory Allocation: Each instance of a structure occupies a contiguous block of memory large enough to hold all its members.
- Scope and Lifetime: Structure instances, like other variables, have scope and lifetime based on where they are declared.


## Complete example

An enhanced example for using structures is in the student-grades.c program. This enhanced example provides a comprehensive demonstration of using structures in C, showing how to define them, assign values to their members, and use them in conjunction with arrays and functions.

- Student Structure: The Student structure is defined to include a name, roll number, an array of grades, and a field for the average grade. This demonstrates how structures can group related data types.

- Assigning Values: The strcpy function is used to assign a string to the name field of the structure since array types, including strings, cannot be assigned directly in C. Integer values are directly assigned to roll_no and each element of the grades array.

- Calculate Average Grade: A function calculateAverage is defined to calculate the average grade from the array of grades. This illustrates how arrays within structures can be manipulated and how structures can be passed to functions (though in this code snippet, we're passing the grades array directly for simplicity).

- Printing Details: The program prints out the student's details, including the grades and the calculated average. This demonstrates accessing structure members and using them in functions like printf.

# Unions (union)

A union allows you to store different data types in the same memory location. You can define a union with many members, but only one member can contain a value at any given time. Think of it as... A storage box that can be repurposed to hold different items, but only one item fits at a given time.

## Defining Unions

```
union Data {
    int intValue;
    float floatValue;
    char strValue[20];
};
```
- union Data { ... }; defines a new union type called "Data".
- Members intValue, floatValue, and strValue all share the same memory location.
- The size of the union will be determined by the size of the largest member (strValue in this case).
- You can store a value in one member, and then later retrieve it (potentially reinterpreting it) as a different type.

## Key Uses for Unions

- Memory Conservation: Useful in very memory-constrained systems where you need to store different types of data, but not all at the same time.
- Data Interpretation: Used to treat the same sequence of bytes in multiple ways. For example: Receiving network data that could be interpreted differently based on a type field.
- Manipulating the individual bytes of a floating-point number.

## Important Considerations

- Responsibility: Using unions correctly requires careful attention. As the programmer, you're responsible for keeping track of the type of data currently stored in the union.
- Type Safety: Incorrectly accessing union members can lead to unexpected results due to misinterpreting data.

## Using Unions

```C
union Data data;

data.intValue = 10; 
printf("Integer Value: %d\n", data.intValue); 

data.floatValue = 3.14159;  // Overwrite the previous value
printf("Float Value: %f\n", data.floatValue); 
```
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