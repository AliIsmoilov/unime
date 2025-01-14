#include <stdio.h>


int main() {

    // Arrays are used to store a mulltiple values in a single variable, 
    // insetad of declaring separate variables for each of them

    // Declaration of arrays
    // int MyNumbers[] = {1, 2, 3, 4, 5};



    // ########################################################

    // Example 
    // Let's build a programm for getting number from output
    // and storing numbers from 0 to output number to array


    int output;
    printf("Enter number: \n");
    scanf("%d", &output);

    int numbers[output];

    int i = 0;
    for (i = 0; i <= output; i++) {
        numbers[i] = i;
    }

    
    int length = sizeof(numbers) / sizeof(numbers[0]);
    for (i = 0; i<= length; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}