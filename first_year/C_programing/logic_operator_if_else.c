#include <stdio.h>

int main() {

       /*  

        -----------------------------|
        |                            |
        |     Logical Operators      |
        |                            |
        -----------------------------|
        |    Operator  |    name     |
        |--------------|-------------|
        |              |             |
        |   &&         |   and       |
        |              |             |
        |   ||         |   or        |
        |              |             |
        |   !          |  not        |
        |              |             |
        |              |             |           
        -----------------------------|
    
    */ 


    // // Even and odd numbers
    // int a, b;
    // printf("Enter number: ");
    // scanf("%d", &a);
    // printf("%d\n", a);

    // if (a%2) {
    //     printf("odd number\n");
    // } else {
    //     printf("even number\n");
    // }


    // Real life example. Let's programm smarthphones unlocking password part

    // Let's say your smarthphone password is 1234
    int smartPhonePassword = 1234;
    
    int passwordEnteredByUser;
    printf("Enter your password for unlocking phone: \n");
    scanf("%d", &passwordEnteredByUser);

    if (smartPhonePassword == passwordEnteredByUser) {
        printf("unnlocked\n");
    } else {
        printf("password is not correct\n");
    }

    return 0;
}