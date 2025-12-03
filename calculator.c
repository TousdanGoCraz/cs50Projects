#include <stdio.h>

int main(){
    double num1 = 0.0;
    double num2 = 0.0;
    char operator = '\0';
    double result = 0.0;

    printf("What is the first number? ");
    scanf("%lf", &num1);
    printf("Choose your operator: + - * / ");
    scanf(" %c", &operator);
    printf("What is the second number? ");
    scanf("%lf", &num2);

    switch(operator){

        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
            }else{
                printf("Invalid input \n");
            }
            break;
 
        case '*':
            result = num1 * num2;
            break;
        default:
            printf("Please choose a valid operator. \n");
    }



    printf("Result is %.2f\n",result);
    return 0;
}