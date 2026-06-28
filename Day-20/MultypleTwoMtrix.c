#include <stdio.h>
int main(){
    int arr[3][2] = {{3,4},{1,2},{9,8}};
    int brr[2][4] = {{1,2,3,4},{5,6,7,8}};
    int res[3][4];
        //multiply
        int cr=2;
    for(int i=0; i<3; i++){
       for(int j=0; j<4; j++){
        //i row of a matrix and j column of b matrix
      //(a[i][0],a[i][1])*(b[0][j],b[1][j]...)
         res[i][j] = 0;
          for(int k=0; k<cr; k++){
               res[i][j] +=arr[i][k]*brr[k][j];
           }         
        }
    }
    //output print
    printf("\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",res[i][j]);    
        }
         printf("\n");
    }
    

}