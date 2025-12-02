#include <stdio.h>
#include <math.h>

int main(){
    double principal = 0.0;
    double interest = 0.0;
    int numOfYear = 0;
    int compoundPerYear = 0;
    double total = 0.0;


    printf("How much principal you got? ");
    scanf(" %lf", &principal);

    printf("What is the interest rate ? ");
    scanf(" %lf",&interest);

    interest = interest / 100;

    printf("Enter # of years: ");
    scanf(" %i", &numOfYear);

    printf("Enter # compounded per year: ");
    scanf(" %i", &compoundPerYear);

    total = principal * pow((1 + interest/ compoundPerYear),numOfYear);
    printf("total is : %.2f",total);
    return 0;
}