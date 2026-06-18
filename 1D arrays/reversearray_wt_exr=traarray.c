#include <stdio.h>
void reverse(int arr[] , int a, int b){

    
    for(int i=a,j=b; i<j; i++,j--){//reverse part of array
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    //int i=0;
    //int j=6;
    //while(i<j){ 
        //arr[i] and arr[j];
       // int temp = arr[i];
        //arr[i] = arr[j];
        //arr[j] = temp;
        //i++;
        //j--;
    }
    return;
}
int main(){
    int arr[7] = {1 ,2 , 3, 4, 5, 6 ,7};
    reverse(arr,2,5);
    //index 1-4 reverse
    //for(int i=1 , j=4; i<=j; i++,j--){
      //  int temp = arr[i];
        //arr[i] = arr[j];
        //arr[j] = temp;
        for(int i=0; i<7; i++){
        printf("%d ",arr[i]);

    }
    
}