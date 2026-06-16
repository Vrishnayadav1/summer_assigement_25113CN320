#include <stdio.h>
int main(){
    int a , b ;
    printf("enter the value of dividend and divisor");  
    scanf("%d %d",&a , &b);
    int  rem;
    rem = a % b;  //2 % x = 2 (x>2) , a%b (a<b)
    printf("remainder is :%d",rem);

}