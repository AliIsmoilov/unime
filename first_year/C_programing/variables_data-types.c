#include <stdio.h>

// INT - stores integers (whole numbers), without decimals, such as 123 or -123
// FLOAT - stores floating point numbers, with decimals, such as 19.99 or -19.99
// CHAR - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes


// FORMAt SPECIFIERS

// int myNum = 15
// printf(myNUm);
// in many oter programming languages it works, but not in C. In C you must tell the compiler what type of data the variable is storing
// A format specifier starts with a percentage sign %, followed by a character.

//  %d or %i	int	
//  %f or %F	float	
//  %lf	        double	
//  %c	        char	
//  %s          string

int main() {

    // int number = 1;
    // float floatNumber = 1.4;
    // char ch = 'a';   

    // printf("it's number type example %d\n", number);
    // printf("it's float type example: %f\n", floatNumber);
    // printf("it's char type example: %c\n", ch);


    // Declaration of Multiple Variables
    // int five = 5, six = 6, seven = 7;
    // printf("%d\n", five);
    // printf("%d\n", six);
    // printf("%d\n", seven);



    // ===================================================================

    // DECIMAL PRECISION
    // if you declar  float number and print it you will see many digits after decimal point
    // If you want to remove the extra zeros (set decimal precision), you can use a dot (.) 
    //followed by a number that specifies how many digits that should be shown after the decimal point:


    // float myFloat = 3.5;
    // printf("%.2f\n", myFloat);


    /*  

        -------------------------------------
        |                                   |
        |        MEMORY SIZE                |
        |                                   |
        -------------------------------------
        |    Data type    |       Size      |
        |                 |                 |          
        |   INTEGER       |      4          |
        |   FLOAT         |      4          |
        |   DOUBLE        |      8          |
        |   CHAR          |      1          |
        |                 |                 |
        |                 |                 |            
        -------------------------------------
    
    */ 

    //  You can see this by yourself running this piece of code

    // int myIntSize;
    // float myFloatSize;
    // double myDoubleSize;
    // char myCharSize;
    // printf("myInt size = %lu\n", sizeof(myIntSize));
    // printf("myFloat size = %lu\n", sizeof(myFloatSize));
    // printf("myDouble size = %lu\n", sizeof(myDoubleSize));
    // printf("myChar size = %lu\n", sizeof(myCharSize));


    

 
    //      TYPE CONVERSIONS
    // int num1 = 5;
    // int num2 = 2;
    // float sum = (float) num1 / num2;

    // printf("%f\n", sum); // 2.500000



    // ###############################################################################
    
    // CONSTANTS
    //  if for your programm needed any value that is not changable during the runtime 
    // you should declare these values as a constant
    
    // This will declare the variable as "constant", which means unchangeable and read-only:

    // const int minutesPreHour = 60;
    // printf("in 1 hout %d minutes\n", minutesPreHour); 

    return 0;
}