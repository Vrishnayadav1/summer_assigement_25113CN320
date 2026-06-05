#include <stdio.h>
int main(){
    int n, rem, sum =0, temp;
    printf("enter the number");
    scanf("%d",&n);
    temp = n;
    while(temp != 0){
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if(sum == n){
        printf("the number is an armstrong number");
    }
    else{
        printf("the number is not an armstrong number");
    }
    return 0;
}