#include <stdio.h>
int main(){
    int n,temp,rem,rev=0;
    printf("enter the value of n");
    scanf("%d",&n);
    temp = n;
    for(; n!=0; n=n/10){
        rem = n%10;
        rev = rev*10 + rem;

    }
    if(temp == rev){
        printf("palindrome number");
    }
    else{
        printf("not a palindrome number");
    }
    return 0;
    
}