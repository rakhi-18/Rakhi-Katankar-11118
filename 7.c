// Program to calculate area of a circle
#include <stdio.h>
float pi=3.14;
int main(){
    float r;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    printf("%f is the area of the circle",pi*(r*r));
    return 0;
}