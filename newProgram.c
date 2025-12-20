#include <stdio.h>
#include <string.h>

int main(){
    char grade = '\0';
    float gpa = 0.0f;
    int age = 0;
    char name[30] = "";

    printf("How old are you? ");
    scanf(" %i", &age);

    printf("What is your GPA? ");
    scanf(" %f", &gpa);

    printf("What is your grade? ");
    scanf(" %c", &grade);

    getchar();

    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("%s, %.2f, %c, %i \n", name, gpa, grade, age);
    return 0;
}