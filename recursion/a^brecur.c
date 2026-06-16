#include <stdio.h>
int pow(int a, int b){
    if(b==0)  return 1;   //base case
    int recursionans = a*pow(a,b-1);
      return recursionans;   //a*pow(a,b-1)           //base case

}
int main(){
    int a;
    printf("enter a :");
    scanf("%d",&a);
    int b;
    printf("enter b :");
    scanf("%d",&b);
    int p = pow(a,b);
    printf("%d  raised to the power %d is  %d",a ,b ,p);

}

     
    