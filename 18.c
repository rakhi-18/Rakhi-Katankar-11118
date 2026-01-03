// Program to find sum of elements of 2D array
#include <stdio.h>
int main(){
    int a,b,sum=0;
    printf("Enter the number rows you want     :");
    scanf("%d",&a);
    printf("Enter the number columns you want  :");
    scanf("%d",&b);
    int arr[a][b];
    printf("---Enter all the elements---");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
                sum+=arr[i][j];
        }
    }
    printf("The sum of all the elements of array is: %d",sum);
    return 0;
}