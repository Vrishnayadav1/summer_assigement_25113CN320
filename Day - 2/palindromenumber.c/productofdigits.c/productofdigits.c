#include <stdio.h>
int main(){
    int num,rem , product =1;
    printf("enter a number:");
    scanf("%d", &num);
    while(num !=0){
        rem =  num % 10;
        product *= rem;
        num /=10;

    }
    printf("product of digits is %d \n",product);
    return 0;
}