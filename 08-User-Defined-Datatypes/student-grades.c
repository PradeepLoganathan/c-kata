#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    char name[50];
    int roll_no;
    int grades[5]; // Assuming a student has 5 grades
    float average; // To store the average grade
};

// Function to calculate the average grade of a student
float calculateAverage(int grades[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return (float)sum / size;
}

int main() {
    struct Student student1;

    // Assigning values to the student1 structure
    strcpy(student1.name, "Alice Johnson");
    student1.roll_no = 25;
    student1.grades[0] = 85; // Sample grades assignment
    student1.grades[1] = 92;
    student1.grades[2] = 88;
    student1.grades[3] = 91;
    student1.grades[4] = 87;

    // Calculating the average grade
    student1.average = calculateAverage(student1.grades, 5);

    // Printing student details
    printf("Student Details:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.roll_no);
    printf("Grades: %d, %d, %d, %d, %d\n",
           student1.grades[0], student1.grades[1], student1.grades[2], student1.grades[3], student1.grades[4]);
    printf("Average Grade: %.2f\n", student1.average);

    return 0;
}
