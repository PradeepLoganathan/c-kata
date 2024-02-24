#include <stdio.h>

// Function prototypes
double calculate_circle_area(double radius);
double calculate_circle_perimeter(double radius);
double calculate_rectangle_area(double length, double width);
double calculate_rectangle_perimeter(double length, double width);
double calculate_triangle_area(double base, double height);
double calculate_triangle_perimeter(double side1, double side2, double side3);

int main() {
    int choice;
    double radius, length, width, base, height, side1, side2, side3;

    printf("Shape Calculator\n");
    printf("----------------\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

     switch (choice) {
        case 1: // Circle
            printf("Enter the radius: ");
            scanf("%lf", &radius);
            printf("Area: %.2f\n", calculate_circle_area(radius));
            printf("Perimeter: %.2f\n", calculate_circle_perimeter(radius));
            break;
        case 2: // Rectangle
            printf("Enter the length: ");
            scanf("%lf", &length);
            printf("Enter the width: ");
            scanf("%lf", &width);
            printf("Area: %.2f\n", calculate_rectangle_area(length, width));
            printf("Perimeter: %.2f\n", calculate_rectangle_perimeter(length, width));
            break;
        case 3: // Triangle
            printf("Enter the base: ");
            scanf("%lf", &base);
            printf("Enter the height: ");
            scanf("%lf", &height);
            printf("Enter the side1: ");
            scanf("%lf", &side1);
            printf("Enter the side2: ");
            scanf("%lf", &side2);
            printf("Enter the side3: ");
            scanf("%lf", &side3);
            printf("Area: %.2f\n", calculate_triangle_area(base, height));
            printf("Perimeter: %.2f\n", calculate_triangle_perimeter(side1, side2, side3));
            break;
     }
        
}

// Function definitions
double calculate_circle_area(double radius) {
    return 3.14159 * radius * radius;
}

double calculate_circle_perimeter(double radius) {
    return 2 * 3.14159 * radius;
}

double calculate_rectangle_area(double length, double width) {
    return length * width;
}

double calculate_rectangle_perimeter(double length, double width) {
    return 2 * (length + width);
}

double calculate_triangle_area(double base, double height) {
    return 0.5 * base * height;
}

double calculate_triangle_perimeter(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}
