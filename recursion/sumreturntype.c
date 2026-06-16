#include <stdio.h>
int sum(int n){
    if(n==1 || n==0){
        return n;
    }
    int x = n + sum(n-1);
    return x;
    }
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int fact = sum(n);
    printf("%d",fact);
     
}