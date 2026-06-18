#include <stdio.h>
int main(){
    int marks[10] = {95 , 24 ,31 ,25 ,20 ,50, 65, 89, 97, 87};
    //int marks[0] = 95;
    //int marks[1] = 90;
    //int marks[2] = 31;
    //int marks[3] = 25;
    //int marks[4] = 100;
    //int marks[5] = 50;
    //int marks[6] = 65;
    //int marks[7] = 89;
    //int marks[8] = 97;
    //int marks[9] = 87;
    for(int i=0; i<10; i++){
       if(marks[i]<35){
          printf("%d ",i);
       }
    }
}