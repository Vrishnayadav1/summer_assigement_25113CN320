#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n); // for and && both divisible or ke liye koi yek divisible
    if(n % 3 == 0 && n % 5 == 0){
        printf("divisible by both");
    }
    else("not divisible by both");
    return 0;
}