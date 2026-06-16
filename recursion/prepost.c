#include <stdio.h>
void preIpost(int n){
    if(n==0) return;
    printf("pre %d\n",n);
    preIpost(n-1);
    printf("In %d\n",n);
    preIpost(n-1);
    printf("post %d\n",n);
}
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    preIpost(n);
}