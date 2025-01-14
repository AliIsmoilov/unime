#include <stdio.h>

int main() {

    // Switch Statement
    // Instead of writing many if..else statements, you can use the switch statement.

    // The switch statement selects one of many code blocks to be executed:


    // The default Keyword
    // default statements will executed if all cases are false. You can see and get full meaning in code below.




    // ############################################################################################

    // Let's build a programm for getting the number of weekdays and return the name of the week day.
    // For example if user input is 1, we must print Monday to console.


    int userInput;
    printf("Enter week day number: \n");
    scanf("%d", &userInput);

    switch(userInput) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wendsday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid week day number\n");
    }

    return 0;
}