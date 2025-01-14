#include<stdio.h>


struct user {
    char name[72];
    int age;
    char nationality[72];
};

int main() {

    struct user user_1 = {"Ali", 21, "Uzbek"};
    struct user user_2 = {.age = 25, .nationality = "Russian", .name = "Vali"};
    printf("\nName: %s\nAge: %d\nNationality: %s\n", user_1.name, user_1.age, user_1.nationality);
    printf("\nName: %s\nAge: %d\nNationality: %s\n", user_2.name, user_2.age, user_2.nationality);

    return 0;
}