#include <stdio.h>
int maze(int n, int m){
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){ //cannot godown
        rightWays +=maze(n,m-1);
    }
    if(m==1){ //cannot rightways
        downWays +=maze(n-1,m);
    }
    if(n>1 && m>1){
        rightWays +=maze(n,m-1);
        downWays +=maze(n-1,m);

    }
    int totalWays = rightWays + downWays; 
     return totalWays;
}
int main(){
    int n;
    printf("enter the number of rows :");
    scanf("%d",&n);
    int m;
    printf("enter number of columns");
    scanf("%d",&m);
    int noOfrows = maze(n,m);
    printf("%d",noOfrows);
    return 0;

}