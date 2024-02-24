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
}