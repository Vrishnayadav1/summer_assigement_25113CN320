#include <stdio.h>
int main(){
    int a , b , c;
    printf("enter the value of a , b, c");
    scanf("%d %d %d", &a, &b, &c);
    if((a + b) > c && (b+c) > a && (c+a) >b){
        printf("sides of triangle");

    }
    else{
        printf("not sides of triangle");

    }
    return 0;
}