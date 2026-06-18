#include <stdio.h>
int main(){
    int a , b ;
    printf("enter the value of dividend and divisor");  
    scanf("%d %d",&a , &b);
    int q;
    q = a/b;
    int r = a - (b*q);  //divisor * quotient + remainder = dividend
    printf("remainder is :%d",r);

}
 