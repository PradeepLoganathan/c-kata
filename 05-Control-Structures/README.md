# Control Structures in C

This document provides explanations for various control structures in C programming, including conditional statements and loops. These structures allow you to control the flow of execution in your programs based on conditions and repeated execution.

## If-Else Statements

If-else statements allow you to execute different blocks of code based on a condition. The `if` statement evaluates a condition. If the condition is true, it executes the block of code within the `if`. If the condition is false, it executes the code within the `else` part, if present.

Compile the if-else.c using ```gcc if-else.c -o if-else``` and execute it using ```./if-else```

## Switch-Case Statements

Switch-case statements provide a way to execute different parts of code based on the value of a variable. It's a more efficient way to write a sequence of `if-else-if` statements when checking the same variable. The `switch` statement evaluates an expression and executes the `case` that matches the expression's value.

Compile the if-else.c using ```gcc switch-case.c -o switch-case``` and execute it using ```./switch-case```

## For Loop

A for loop is used for iterating over a range of values. It is useful when the number of iterations is known before entering the loop. The for loop includes an initialization, a condition, and an increment/decrement operation.

Compile the if-else.c using ```gcc for-loop.c -o for-loop``` and execute it using ```./for-loop```

## While Loop

A while loop repeats a block of code as long as a specified condition is true. It's useful when the number of iterations is not known before entering the loop. The condition is evaluated before the execution of the loop's body.

Compile the if-else.c using ```gcc while-loop.c -o while-loop``` and execute it using ```./while-loop```

## Do-While Loop

The do-while loop is similar to the while loop, but it guarantees at least one execution of the loop body, even if the condition is false at the first attempt. The condition is evaluated after the execution of the loop's body.

Compile the if-else.c using ```gcc do-while.c -o do-while``` and execute it using ```./do-while```

---

These control structures are fundamental in creating structured and efficient C programs. They allow for implementing complex logic and behaviors in a simple and understandable way.


# Guessing Game

This is a fun game to demonstrate control structures. Through this simple game, learners get hands-on experience with loops, conditional statements, user input, and random number generation in C. It's a practical example that combines several fundamental programming concepts in a fun and engaging way.

- Random Number Generation: The program uses srand to seed the random number generator with the current time (time(NULL)), ensuring that you get different sequences of random numbers each time you run the program. It then generates a random number between 1 and MAX_RANGE using rand().

- Guessing Loop: The program uses a do-while loop to repeatedly ask the user for their guess until it matches the randomly generated number. This ensures that the loop executes at least once.

- User Input and Feedback: Inside the loop, the program reads the user's guess with scanf, increments the attempts counter, and provides feedback if the guess is too high or too low. When the guess is correct, it congratulates the user and displays the number of attempts made.

- Adjusting Difficulty: You can change the MAX_RANGE constant to increase or decrease the difficulty of the game.

## Compiling and Running:

Save the code in a file named guessing_game.c.
Compile the program using GCC: ```gcc guessing_game.c -o guessing_game```.
Run the compiled program: ```./guessing_game```.
This game is a fun and interactive way to practice using loops, conditional statements, and random number generation in C.