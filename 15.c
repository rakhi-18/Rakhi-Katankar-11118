// Program for linear search
#include <stdio.h>
int main(){
    int a,k;
    printf("How many number you want to insert in an array: ");
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        printf("Enter the element :");
        scanf("%d",&b[i]);
    }
    printf("Enter what you want to search in array:");
    scanf("%d",&k);
    for ( int j=0;j<a;j++){
        if(b[j]==k){
            printf("found");
            return 0;
        }
    }printf("Not found");
    return 0;
}