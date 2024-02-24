# Program explanation

## #include <stdio.h>:

This is a preprocessor directive. It tells the compiler to include the contents of the stdio.h (standard input/output) header file. This file contains the definition of the printf() function, which we'll use to print our message.

## int main() {

This line defines the main() function. Every C program must have a main() function, as this is where the program execution begins. The int indicates that the function will return an integer value.

## printf("Hello, World!\n");

This line is the heart of the program. The printf() function is used to send output to the console (your terminal). Inside the parentheses:
"Hello, World!\n" is the string (sequence of characters) that you want to print.
\n is a newline character. This tells the console to move the cursor to the next line after printing the message.

## return 0;

This line indicates that the program has executed successfully. By convention, a return value of 0 from the main() function signals success to the operating system.

# Writing, Compiling & running the code

## Write the Program:

- Open your terminal in WSL2.
- Use a text editor to create a new C file, for example: nano hello.c.
- Copy and paste the code provided above into the editor.
- Save the file and exit the editor (in nano, press Ctrl + O, Enter, and then Ctrl + X to exit).

## Compile the Program:

- In the terminal, navigate to the directory where you saved hello.c.
- Compile the program using GCC by typing ```gcc helloworld.c -o helloworld```.
- This command tells GCC to compile hello.c into an executable named hello.

## Run the Program:

- After compiling, run the program by typing ```./helloworld``` in the terminal.
- You should see the output: Hello, World!

That's it! You've successfully written, compiled, and run a "Hello, World!" program in C. This simple exercise gets you started with C programming by introducing you to the process of writing source code, compiling it into an executable, and running that executable to see its output.