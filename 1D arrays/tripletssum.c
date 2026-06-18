#include <stdio.h>
int main(){
    int arr[8] = {1 , 2, 3, 4, 5, 6, 7, 8};
    int count = 0;
    int x = 6;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            for(int k=i+2; k<8; k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    count++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",count);
}