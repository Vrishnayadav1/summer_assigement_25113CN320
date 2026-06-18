#include <stdio.h>
#include <limits.h>
int main(){
    int arr[6] = {3,5,4,-20,-31,-64};
    int max = INT_MIN; //sabse chhota number
    for(int i=1; i<6; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d ",max);

}