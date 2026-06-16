#include <stdio.h>
int main(){
int x1 = 1;
int y1 = 2;
int x2 = 3;
int y2 = 4;
int x3 = 5;
int y3 = 6;
double slope1 = (y2 - y1)/(x2 - x1);
double slope2 = (y3 - y2)/(x3 - x2);
if(slope1 == slope2){
    printf("straight line");
}
else{
    printf("not straight line");
}
return 0;

}