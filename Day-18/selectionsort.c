#include <stdio.h>
int main(){
    int arr[7] = {7,4,5,9,8,2,1};
    int n = 7;
    int INT_MAX;
    printf("unsorted arry :");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i; j<=n-1; j++){//worst ,best and avg case = time complexcity = O(n^2)
           if(min>arr[j]){//bubble sort stable and selection sort unstable
            min = arr[j];
            minidx = j;
           }
        }
        // swap the min and first element of unsorted part
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    printf("\n");
    printf("sorted array\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    } 
}