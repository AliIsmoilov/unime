#include <stdio.h>


void greeting(char name[]) {
    printf("Hello %s\n", name);
}

void calculateSum(int a, int b) {
    int sum = a +b;
    printf("sum = %d\n", sum);
}


char* greeting2(char name[]) {
    // printf("Hello %s\n", name);
    return name;
}

int calculateSum2(int a, int b) {
    int sum = a +b;
    return sum;
}


void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {


    // greeting("Ali");
    // calculateSum(10, 25);
    // int resp = calculateSum2(10, 25);
    // printf("sum = %d\n", resp);

    char resp[] = "Vali";
    char *result = greeting2(resp);
    printf("%s\n", result);

    return 0;
}