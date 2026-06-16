#include <stdio.h>
int pow(int a, int b){
      int x = 1;
      for(int i=1; i<=b; i++){
        x = x*a;
      } 
      return x;             //base case

}
int main(){
    int a;
    printf("enter a :");
    scanf("%d",&a);
    int b;
    printf("enter b :");
    scanf("%d",&b);
    int p=pow(a,b);
    printf("%d  raised to the power %d is  %d",a ,b ,p);

}