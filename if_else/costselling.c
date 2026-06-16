#include <stdio.h>
int main(){
    int cp , sp ,profit ,loss;
    printf("enter the value of cp and sp");
    scanf("%d %d",&cp, &sp);
    if(sp>cp){
        profit = sp - cp;
        printf("profit is :%d",profit);
    }
    else{
        loss = sp - cp;  //negative
        
        printf("loss is :%d",loss);
    }
    return 0;
}