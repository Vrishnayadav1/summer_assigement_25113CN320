#include <stdio.h>
int main(){
    int a , b, c;
    printf("enter the all values ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        printf("greatest number is a");
    }
    if(b>a && b>c){
        printf("greatest number is b");
    }
    else{
        printf("greatest number is c");
    }
    return 0;
}