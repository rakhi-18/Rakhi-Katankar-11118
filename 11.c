//program to print 1 to 10 using loops
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter Starting value : ");
    scanf("%d",&a);
    printf("Enter Ending value : ");
    scanf("%d",&b);
    for (int i=a;i<=b;i++){
        printf("%d\n",i);
    }
}