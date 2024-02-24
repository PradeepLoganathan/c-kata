# Arrays and strings

Arrays and strings are fundamental concepts in C programming, essential for storing collections of data and sequences of characters, respectively. In this section, we'll explore how to work with these data types through examples.

## Arrays in C
An array is a collection of items stored at contiguous memory locations, allowing you to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value.

## Strings in C
In C, strings are arrays of characters terminated by a null character '\0'. C does not have a native string data type, but it supports string manipulation through arrays of char terminated by a null character.

---
Arrays and strings often work together in C programs, especially when dealing with arrays of strings or manipulating strings in more complex ways. Understanding how to work with these data types is crucial for effective programming in C, as they form the basis for data storage and manipulation.

# Example program for arrays and strings

## Basic Arrays and Strings
A sample program to understand arrays and string is in the file string-basic.c. The code is below

```C
#include <stdio.h>
#include <string.h> // Include for string functions

int main() {
    char name[20] = "Alice"; // Character array with initialization
    int nameLength;

    // Print the string
    printf("Initial name: %s\n", name);

    // Overwrite a character
    name[3] = 'x'; 
    printf("Modified name: %s\n", name);

    // String concatenation using strcat
    strcat(name, " Smith");
    printf("Appended name: %s\n", name);

    // Calculate length using strlen
    nameLength = strlen(name);
    printf("Length of name: %d\n", nameLength);

    return 0;
```

### Explanation

- Headers: stdio.h is for input/output and string.h is needed for functions like strcat and strlen.
- Character Array: char name[20] creates an array capable of storing strings up to 19 characters long (remember the space for the null terminator!).
- Initialization: The string "Alice" is directly assigned to the name array.
- Modification: Characters within the array can be accessed and modified like any array element.
- strcat(): This function appends one string to the end of another. Notice how it automatically handles the null terminator.
- strlen(): Calculates the length of the string, not including the null character.

## String Reversal Program in C

Reversing a string in C can be a good exercise to understand arrays, strings, and the concept of in-place modification. Below is a simple C program that demonstrates how to reverse a string. This program uses a two-pointer approach, where the beginning and end of the string are swapped and then move towards the center until they meet or cross. The code is in Reverse-String.c and is also below.

```C
#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str); // Get the length of the string
    int left = 0; // Start of the string
    int right = length - 1; // End of the string

    while(left < right) {
        // Swap the characters at left and right
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }
}

int main() {
    char myString[] = "Hello, World!";
    printf("Original string: %s\n", myString);

    reverseString(myString); // Function call to reverse the string

    printf("Reversed string: %s\n", myString);

    return 0;
}

```

### How It Works

- reverseString Function: This function takes a pointer to a string (char array) as its parameter. It calculates the length of the string using strlen, a standard library function defined in <string.h>.

- Two-pointer Approach: The function initializes two indices, left pointing to the start of the string and right pointing to the end. It then enters a loop where it swaps the characters at these indices, moving left forward and right backward until they meet or cross.

- In-place Modification: The string is reversed in place, meaning no additional string/array is created for the operation. This is efficient in terms of memory usage.

- Main Function: Demonstrates usage by reversing a hardcoded string and printing both the original and reversed strings to the console.

### Compiling and Running
To compile and run this program:

- Compile it using GCC: ```gcc reverse_string.c -o reverse_string```.
- Run the compiled program: ```./reverse_string```.