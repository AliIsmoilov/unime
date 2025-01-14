#include <stdio.h>


// Loops can execute a part of code as long as specified condition is true
// Loops can save time and make code more readable

int main() {

    // Let's build programm for getting any number from user and print to console from 0 until the user input

    int userInput;
    printf("Enter number: ");
    scanf("%d", &userInput);

    int i = 0;
    while (i <= userInput) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}