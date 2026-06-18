#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=n; i<=n*n; i=i+n){
        printf("%d\n",i);
    }
}