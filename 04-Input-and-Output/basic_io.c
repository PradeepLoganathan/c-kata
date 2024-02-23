#include <stdio.h>

int main() {
    // Variable declarations
    int age;
    float salary;
    char initial;
    char name[100]; // Array to store a name

    // Input Section
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read a name (including spaces)

    printf("Enter your age: ");
    scanf("%d", &age); // Using scanf to read an integer

    printf("Enter your salary: ");
    scanf("%f", &salary); // Using scanf to read a float

    printf("Enter the first initial of your last name: ");
    // Using scanf to read a char. 
    // Notice the space before %c to catch any newline character left in the input buffer
    scanf(" %c", &initial);  

    // Output Section
    // Printing the collected data
    printf("\n--- Summary ---\n");     
    printf("Name: %s", name); // Note: fgets() might leave a newline
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);  // %.2f formats 2 decimal places
    printf("Initial: %c\n", initial);

    return 0;
}
