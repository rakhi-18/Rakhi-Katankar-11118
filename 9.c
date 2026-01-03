// Program to find maximum of three numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf("%d",&b);
    printf("Enter number 3:");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is the maximum of all the numbers",a);
    }else if(b>a && b>c){
        printf("%d is the maximum of all the numbers",b);
    }else if(c>b && c>a){
        printf("%d is the maximum of all the numbers",c);
    }
    return 0;
}