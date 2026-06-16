#include <stdio.h>
int main(){
    //int arr[3][3];
    int r;
    printf("enter the value of row");
    scanf("%d",&r);
    int c;
    printf("enter the value of column");
    scanf("%d",&c);
    int arr[r][c];
     printf("enter the all values");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }
}