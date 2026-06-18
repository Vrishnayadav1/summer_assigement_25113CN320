#include <stdio.h>
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int evensum = 0 ,oddsum=0 , sum=0;
    for(int i=0; i<6; i++){
        if(i%2 == 0) evensum = evensum + arr[i];
        else oddsum = oddsum + arr[i];
    }
    sum = evensum - oddsum;
        printf("%d ",sum);
    
}