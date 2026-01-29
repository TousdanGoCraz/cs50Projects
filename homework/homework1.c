#include <stdio.h>
#include <string.h>


int main(void){
    char name[30], lastName[30],sentence[20] = "";
    int age = 0;
    long int id, cardNum = 0; 
    float grade = 0.0f;
    char bloodType = '\0';



    //Prompt Name --Will give a format error. 
    printf("What is your name? ");
    scanf(" %s" , &name);


    //Prompt Last name --Will give a format error. Too lazy to use fgets. Code will work correctly.
    printf("What is your last name? ");
    scanf(" %s" , &lastName);


    //prompt age
    printf("How old are you? ");
    scanf(" %d" , &age);


    //prompt id number
    printf("What is your ID number?(10 digits) ");
    scanf(" %li" , &id);


    
    //prompt card number
    printf("What is your card number?(16 digits) ");
    scanf(" %li" , &cardNum);

    //Make it ask the user again until credit number is correct


    
    //prompt grade 
    printf("What is your GPA? ");
    scanf(" %f" , &grade);


    //prompt blood type
    printf("What is your blood type? +/- ");
    scanf(" %c" , &bloodType);

    //prompt a sentence
    getchar();
    printf("What would you like to say about yourself? ");
    fgets(sentence, sizeof(sentence), stdin);

    //sentence[strlen(sentence) - 1] = '\0';

    //print all 

    printf("Hello,%s %s,\n You are %i years old.\n Your ID number is: %li.\n Your credit card info: %li.\n Your Grade is: %.3f\n Your blood type is: +/- %c\n You said: %s\n",name , lastName, age, id, cardNum, grade, bloodType, sentence);


    return 0;
}