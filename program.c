#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    int start = 0, end = length - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    char inputString[] = "Hello, world!";
    
    printf("Original string: %s\n", inputString);

    reverseString(inputString);
    
    printf("Reversed string: %s\n", inputString);
    
    return 0;
}
