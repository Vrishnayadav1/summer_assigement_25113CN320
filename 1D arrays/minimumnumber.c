#include <stdio.h>
#include <limits.h>
int main(){
    int arr[6] = {3,5,4,-20,-31,-64};
    int min= INT_MAX; //sabse chhota number
    for(int i=1; i<6; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d ",min);

}