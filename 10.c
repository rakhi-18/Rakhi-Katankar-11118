// Program using switch case calculator
#include <stdio.h>
int main(){
    int a,b,result;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    char operator;
    printf("What you want me to do (+,-,*,/,%%): ");
    scanf(" %c",&operator);
    switch(operator){
        case '+': result = a+b;
        break;
        case '-': result = a-b;
        break;
        case '*': result = a*b;
        break;
        case '/': {
            if(b==0){
                printf("It is not possible");
                return 0;
            }else {
                result = a/b;
            }
        }
        break;
        case '%': result = a%b;
        break;
        default: printf("All done\n");
        break;
    }
    printf("%d is your result",result);
    return 0;
}