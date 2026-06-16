#include <stdio.h>
int main(){
    int age , a ,b , c;
    printf("enter the age of ram");
    scanf("%d",&a);
    printf("enter the age of shyam");
    scanf("%d",&b);
    printf("enter the age of ajay");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("youngest is ram");
    }
     else if(b<a && b<c){
        printf("youngest if shyam");
    }
    else{
        printf("youngest is ajay");
    }
    return 0;

}