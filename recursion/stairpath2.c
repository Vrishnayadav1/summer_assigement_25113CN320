#include <stdio.h>
int path(int n){
    if(n==1 || n==2 || n==3) return n;  //(n<=2) ,if(n==1) return 1,if(n==2) return 2;
    int totalways = path(n-1) + path(n-2) + path(n-3);
    return totalways;
}
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int p = path(n);
    printf("%d",p);

}