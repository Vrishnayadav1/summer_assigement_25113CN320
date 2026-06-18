#include <stdio.h>
int main(){
   int arr[5] = {1 , 2, 3,2 ,1};
   for(int i=0,j=4; i<5 ,j>0; i++,j--){
    if(arr[i]==arr[j]){
       printf(" palindrome number ");
       break;
       
    }
    else{
        printf("not palindrome number ");
        break;
    }
    i++;
    j--;
   }
   for(int i=0; i<5; i++){
    printf("%d ",arr[i]);
   }
   return 0;
}