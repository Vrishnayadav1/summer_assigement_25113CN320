#include <stdio.h>
int main(){
    int arr[6] = {3,5,4,-20,-31,-64};
    int max = arr[0];
    for(int i=1; i<6; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d ",max);

}