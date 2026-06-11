#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){  //outer loop ->no of lines
        for(int j=1; j<=n-i+1; j++){ //inner loop -> no of stars in each line
       
            printf("%d ",j);  ///1  2 3 4
        }
        printf("\n");
    }
    
    return 0;
}