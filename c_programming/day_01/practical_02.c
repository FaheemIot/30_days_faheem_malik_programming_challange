#include <stdio.h>

int main() {
    char name[50]; // Assuming the name will not exceed 50 characters

    printf("Enter your name: ");
    scanf("%s", name); // Read the name from the user input

    printf("Hello, %s! Welcome to our program.\n", name);

    return 0;
}
