#include <stdio.h>
int main(){
    int n , positive;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n<0){
        n = n*(-1);
    }
 
         printf("the absolute value is :%d",n);
    
}