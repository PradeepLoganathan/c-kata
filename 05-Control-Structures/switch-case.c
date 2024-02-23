#include <stdio.h>

int main() {
    char grade;
    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade); // Notice the space before %c to catch any newline character left in the input buffer

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Well done\n");
            break;
        case 'D':
            printf("You passed\n");
            break;
        case 'F':
            printf("Better try again\n");
            break;
        default:
            printf("Invalid grade\n");
    }

    return 0;
}
