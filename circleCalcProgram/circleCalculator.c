#include <stdio.h>
#include <math.h>

int main(){
    float radius = 0.0f;
    const float PI = 3.14159;
    float area = 0.0f;
    float surface = 0.0f;
    float volume = 0.0f;

    printf("What is the radius? ");
    scanf(" %f",&radius);
    
    area = PI * pow(radius, 2);
    printf("%.2f\n", area);
    
    surface = 4 * PI * pow(radius,2);
    printf("%.2f\n", surface);

    volume = 4.0 / 3.0 * (PI * pow(radius, 3));
    printf("%.2f\n", volume);

    return 0;

}