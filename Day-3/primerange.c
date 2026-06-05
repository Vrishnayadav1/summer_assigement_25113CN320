#include <stdio.h>
int isprime(int num){
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n1,n2;
    printf("enter the value of n1 and n2");
    scanf("%d %d",&n1,&n2);
    for(int i=n1;i<=n2;i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }
    return 0;
    
}