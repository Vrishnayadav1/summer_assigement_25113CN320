#include <stdio.h>
int main(){
    int a , b , c;  //all three are distinguish
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("greatest a");
        }
        else{
            printf("c is greatest");
        }
    }
    else{
        if(b>a){
            if(b>c){
                printf("greatest b");
            }
            else{
                printf("c is greatest");
            }
        }
    }
        return 0;

}

    



