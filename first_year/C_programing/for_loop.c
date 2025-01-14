#include <stdio.h>

int main() {

    // In programming we have also another type of loops which is for loop
    // When you know exactly how many times you must loop block code using for loop is good option than while loop

    
    
    
    // Example 1
    // Let's build a program which will 
    // get any number from output and prints to console every even numbers from 1 to input number

    // int input;
    // printf("Enter number: \n");
    // scanf("%d", &input);

    // int i;
    // for (i = 0; i <= input; i++) {
    //     if (i % 2 == 0) {
    //         printf("%d ", i);
    //     }
    // }


    // ####################################################################################

    
    // Example 2
    // Let's build a programm which will
    // get any number from output and calculates sum of the numbers from 0 to output number

    int inputNumber;
    printf("Enter number: \n");
    scanf("%d", &inputNumber);

    int i;
    int sum = 0;
    for (i = 1; i <= inputNumber; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}