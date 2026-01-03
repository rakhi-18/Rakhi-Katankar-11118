// Program for 2D array input/output
#include <stdio.h>
int main(){
    int m,n;
    printf("How many rows you want :");
    scanf("%d",&m);
    printf("How many column you want :");
    scanf("%d",&n);
    int arr[m][n];
    printf("---Enter the elements---\n");
    for (int i=0;i<m;i++){
        for ( int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<n;i++){
        for ( int j=0;j<m;j++){
            printf("%d  ",arr[i][j]);
        }printf("\n");
    }
    return 0;
}