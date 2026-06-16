#include <stdio.h>
int main(){
    int arr[3] = {1 ,2 ,1 , 1};
    for(int i=0; i<=3; i++ ){
       printf("%p\n",&arr[i]);
       //printf("%p\n",&arr[0]);
    }
    return 0;
}