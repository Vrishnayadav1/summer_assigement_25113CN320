#include <stdio.h>
int main(){
    int arr[8] = {1, 2,9, 4, 5,7, 6, 7};
    int x;
    int idx = -1;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i] == arr[j]){
               printf("%d duplicate number and index %d",arr[i],i);
               break;
            }


        }
    }
}