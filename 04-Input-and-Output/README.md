## Explanation

1. Header:
- ```#include <stdio.h>``` is included for input/output operations.

2. Variables:

- ```int age```: To store an integer age.
- ```float salary```: To store a floating-point salary value.
- ```char initial```: To store a single character initial.
- ```char name[100]```: A character array to store the user's name (up to 100 characters long).

3. Input:

- ```printf()``` displays prompts to guide the user.
- ```fgets(name, 50, stdin)```: Reads a string of characters (including spaces) from standard input (stdin) and stores it into the name array. The 100 limits the input to a maximum of 99 characters to prevent buffer overflow.
- ```scanf("%d", &age)```: Reads an integer from the user and stores it in the age variable.
- ```scanf("%f", &salary)```: Reads a floating-point number from the user and stores it in the salary variable.
- ```scanf(" %c", &initial)```: Reads a single character and stores it in the initial variable. The space before %c is important to consume any leftover newline characters from previous input.

4. Output:

- ```printf("\n--- Summary ---\n")```: Prints a heading for better readability.
- ```printf("Name: %s", name)```: Prints the entered name. Note that fgets might have included a trailing newline character, which will be printed as well.
- ```printf("Age: %d\n", age), printf("Salary: %.2f\n", salary), printf("Initial: %c\n", initial)```: Print the other values with explanatory labels.

# Running the Program

Compile and run this program just like the previous ones:

- Save the code in a file, for example, basic_io.c.
- Compile it using GCC: ```gcc basic_io.c -o basic_io```.
- Execute the compiled program: ```./basic_io```.