#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[8] = {1, 3, 2, 4,1, 2, 3 };
    int x;
    int idx = -1;
    for(int i=0; i<8; i++){
        bool flag = false;
        for(int j=i+1; j<8; j++){
            if(arr[i] == arr[j]){
               flag = true;
            }
        }
        if(flag==false){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}
