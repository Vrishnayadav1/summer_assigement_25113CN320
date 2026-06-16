#include <stdio.h>
int main(){
    int age , a ,b , c;
    printf("enter the age of ram");
    scanf("%d",&a);
    printf("enter the age of shyam");
    scanf("%d",&b);
    printf("enter the age of ajay");
    scanf("%d",&c);
    if(a<b){
        if(a<c)
        printf("a is young");
        else
        printf("c is young");
    }
    else{
        if(b<a){
            if(b<c)
            printf("b is young");
            else
            printf("c is young");
        }
    }
}