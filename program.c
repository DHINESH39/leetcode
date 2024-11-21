#include <stdio.h>

int find_length(char *string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char input_string[] = "Hello, world!";
    int length_of_string = find_length(input_string);
    printf("The length of the string is: %d\n", length_of_string);
    return 0;
}
