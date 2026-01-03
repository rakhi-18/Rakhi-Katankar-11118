// Program to find sum of N natural numbers
#include <stdio.h>
int main(){
    int a,b=0;
    printf("Enter the number till you want the natural numbers to go:");
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        b+=i;
    }printf("The sum of these natural numbers are : %d",b);
    return 0;
}