#include <stdio.h>
int main(){
    int arr[3][3] = {{3,4,5},{1,2,7,},{9,8,7}};
    //3 4 5
    //1 2 7
    //9 8 7
    //always nxn
    for(int i=0; i<3; i++){
       for(int j=i; j<3; j++){//j=0;,j<=i; same result
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;

        }
    }
    printf("\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           // printf("%d",arr[j][i]);
            printf("%d ",arr[i][j]);    

        }
         printf("\n");
    }
    

}