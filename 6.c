// Program to swap two numbers (using variables/pointers)
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the frist value for variable a:");
    scanf("%d",&a);
    int *x=&a;
    printf("Enter the frist value for variable b:");
    scanf("%d",&b);
    int *y=&b;
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
    printf("%d is the value of a now\n",a);
    printf("%d is the value of b now\n",b);
    return 0;
}