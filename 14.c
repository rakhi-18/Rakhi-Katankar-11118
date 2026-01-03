// Program for 1D array input/output
#include <stdio.h>
int main(){
    int a,k=1;
    printf("How many number you want to insert in an array: ");
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        printf("Enter the element %d :",k);
        scanf("%d",&b[i]);
        k++;
    }
    k=0;
    for ( int j=0;j<a;j++){
        printf("%d is in index %d\n",b[j],k);
        k++;
    }
    return 0;
}