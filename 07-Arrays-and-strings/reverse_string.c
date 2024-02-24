#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str); // Get the length of the string
    int left = 0; // Start of the string
    int right = length - 1; // End of the string

    while(left < right) {
        // Swap the characters at left and right
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }
}

int main() {
    char myString[] = "Hello, World!";
    printf("Original string: %s\n", myString);

    reverseString(myString); // Function call to reverse the string

    printf("Reversed string: %s\n", myString);

    return 0;
}
