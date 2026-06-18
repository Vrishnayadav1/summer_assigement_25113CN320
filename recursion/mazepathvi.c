#include <stdio.h>
int maze(int cr, int cc, int er ,int ec){
    int rightWays = 0;
    int downWays = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){ //only rightways call
        rightWays += maze(cr , cc+1 ,er,ec); 
    }
    if(cc==ec){ //only downways call 
        downWays += maze(cr+1,cc,er,ec); 
    }
    if(cr<er && cc<ec){
        rightWays += maze(cr , cc+1 ,er,ec);
        downWays += maze(cr+1,cc,er,ec);

    }
     int totalways = rightWays + downWays;
     return totalways;
}
int main(){
    int n;
    printf("enter the number of rows :");
    scanf("%d",&n);
    int m;
    printf("enter number of columns");
    scanf("%d",&m);
    int noOfrows = maze(1, 1,n,m);
    printf("%d",noOfrows);
    return 0;

}