#include <stdio.h>
void increasing(int x,int n){
    if(x>n) return ; //n fix
    printf("%d\n",x); // x=1 ,n=5
    increasing(x+1,n);  //calling
    return;
    }
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
    

}
