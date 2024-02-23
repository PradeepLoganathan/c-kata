#include <stdio.h>
#include <stdbool.h> // Boolean variable (add a header file for true/false)

int main() {
    // Integer variables
    int age = 30;
    int wholeNumber = -12345; 

    // Floating-point variables
    float pi = 3.14159;
    double preciseNumber = 1.23456789012345; 

    // Character variable
    char initial = 'A';

    // String (array of characters)
    char stringVar[] = "Hello, World!";

    bool isLearning = true;

    // Printing integer variable
    printf("Integer (age): %d\n", age);
    printf("Integer (wholeNumber): %d\n", wholeNumber);

    // Printing floating-point variables
    printf("Floating-point (pi): %f\n", pi);
    printf("Double (preciseNumber): %lf\n", preciseNumber);

    // Printing character variable
    printf("Character (initial): %c\n", initial);

    // Printing string variable
    printf("String Variable: %s\n", stringVar);

    printf("Size of integerVar: %zu bytes\n", sizeof(age));
    printf("Size of floatVar: %zu bytes\n", sizeof(pi));
    printf("Size of doubleVar: %zu bytes\n", sizeof(preciseNumber));
    printf("Size of charVar: %zu byte\n", sizeof(initial));
    printf("Size of stringVar: %zu bytes\n", sizeof(stringVar));

    return 0;
}



