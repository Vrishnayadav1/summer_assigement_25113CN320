#include <stdio.h>
int powlog(int a, int b){
if(b==0) return 1;
int x = powlog(a,b/2);
if(b%2 == 0){
    return  x * x; 
}
if(b%2 != 0){
    return x * x *a;
    
}
}


int main(){
    int a;
    printf("enter a :");
    scanf("%d",&a);
    int b;
    printf("enter b:");
    scanf("%d",&b);
    int p = pow(a,b);
    printf("%d",p);
}