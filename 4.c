// Program to find largest of two numbers
#include <stdio.h>
int main(){
    int a,b,k;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    if(a>b){
        k=a;
    }
    if(b>a){
        k=b;
    }
    if(a==b){
        printf("both the inputs are equal");
        return 0;
    }
    printf("The largest number among them is : %d",k);
    return 0;
}