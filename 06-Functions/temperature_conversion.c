#include <stdio.h>

// Function Declarations
double fahrenheitToCelsius(double fahrenheit);
double celsiusToFahrenheit(double celsius);

int main() {
    double fahrenheit, celsius;
    char option;

    printf("Choose the conversion:\n");
    printf("1. Fahrenheit to Celsius (Enter 'F')\n");
    printf("2. Celsius to Fahrenheit (Enter 'C')\n");
    printf("Option: ");
    scanf(" %c", &option); // Note the space before %c to catch any newline character left in the input buffer

    if (option == 'F' || option == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsius = fahrenheitToCelsius(fahrenheit);
        printf("%.2f Fahrenheit is %.2f Celsius.\n", fahrenheit, celsius);
    } else if (option == 'C' || option == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &celsius);
        fahrenheit = celsiusToFahrenheit(celsius);
        printf("%.2f Celsius is %.2f Fahrenheit.\n", celsius, fahrenheit);
    } else {
        printf("Invalid option. Please run the program again.\n");
    }

    return 0;
}

// Function Definitions
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}
