#include <stdio.h>
int main(){
    int arr[5] = {1,2,3 ,4,5};
    int count = 0;
    int x = 3;
    for(int i=0; i<5; i++){
        if(arr[i] > x) count++;
        printf("%d ",count);
    }

    
}
