// Program to check odd or even number
#include <stdio.h>
int main(){
    int a;
    printf("Enter any number to check: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number is Even");
    }else{
        printf("The number is Odd");
    }
    return 0;
}