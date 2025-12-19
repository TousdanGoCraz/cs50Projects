#include <stdio.h>

int main(){
    float num1 = 100;
    float num2 = 9.994;
    float num3 = -15.2124;

    printf("%+5.2f\n%-5.2f\n%06f\n", num1, num2, num3);
    printf("%05.2f\n", num2);
    printf("%-5.2f\n", num3);
    return 0;
}