#include <stdio.h>
#include <stdbool.h>

int main(){

    float price = 10.00;
    bool student = true;
    bool senior = false;


    if(student){
        if (student && senior){
            price *= 0.7;
            printf("Your fee is : %.2f\n",price);
        }else{
        price *= 0.9;
        printf("Your fee is: %.2f\n", price);
        }
    } else if (senior){
        price *= 0.8;
        printf("Your fee is: %.2f\n", price);
    } else{
        printf("Your total is: %.2f\n",price);
    }
    return 0;
}