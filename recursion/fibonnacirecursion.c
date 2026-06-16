#include <stdio.h>
int fibonacci(int n){
    if(n==1 || n==2) return 1;   ///if(n<=2)
    int n1 = fibonacci(n-1);
    int n2 = fibonacci(n-2);
    int n3 = n1 + n2;
    return n3; //fibo(n-1)+fibo(n-2)

}
int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    printf("%d",fibonacci(n));

}