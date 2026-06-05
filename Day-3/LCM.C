#include <stdio.h>
int main(){
    int a,b,lcm;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    lcm=(a>b)?a:b;
    while(1){
        if(lcm%a==0 && lcm%b==0){
            printf("the lcm of %d and %d is %d",a,b,lcm);
            return 0;
        }
        lcm++;
    }
}