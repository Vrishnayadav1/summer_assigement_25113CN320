#include <stdio.h>
int isarmstrong(int n){
    int rem, sum =0, temp;
    temp = n;
    while(temp != 0){
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if(sum == n){
        return 1; // the number is an armstrong number
    }
    else{
        return 0; // the number is not an armstrong number
    }

    
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(isarmstrong(n)){
        printf("the number is an armstrong number");
    }
    else{
        printf("the number is not an armstrong number");
    }
    return 0;

}