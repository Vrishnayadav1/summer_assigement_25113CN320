#include <stdio.h>
int main(){
    int p;
    printf("enter p");
    scanf("%d",&p);
    if( p > 90 && p <100){
        printf("exellent");
    }
    else if(p>80 && p<90){
        printf("very good");
    }
    else if(p>60 && p<70){
        printf("can do better");

    }
    else if(p>50 && p<60){
        printf("average");
    } 
    else if(p>40 && p<50){
        printf("below average");
    }
    else{
        printf("fail");
    }
    return 0;

}