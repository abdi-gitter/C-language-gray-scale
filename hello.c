#include <stdio.h>

int main() {
    char name[100]; // Declaring a character array of size 100

    printf("What is your name? "); // Asking the user for their name
    fgets(name, sizeof(name), stdin); // Reading the input using fgets

    // Printing the greeting message
    printf("Hello, %s", name); // 'name' already contains a newline character if entered by the user

    return 0;
}

