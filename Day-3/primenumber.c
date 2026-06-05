#include <stdio.h>
int main(){
    int n , flag = 0 ;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n<=1){
        printf("not prime number");
    }
    else{
        for(int i = 2; i<=n/2; i++){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }
    
        if(flag =0){
            printf("prime number");
            }
        else{
            printf("not prime number");
            }
        }
            return 0;
}

    
