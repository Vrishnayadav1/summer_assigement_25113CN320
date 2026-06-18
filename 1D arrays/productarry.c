#include <stdio.h>
int main(){
    int arr[3]={1,2,3};
    int product = 1;
    for(int i=0; i<3; i++){
        product = product *arr[i];
    }
    printf("%d",product);
}