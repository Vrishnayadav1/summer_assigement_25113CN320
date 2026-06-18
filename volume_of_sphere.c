#include <stdio.h>
int main(){
    int r;
    float volume;
    printf("enter the value of radius:");
    scanf("%d",&r);
    volume = (4/3)*3.14*r*r*r;
    printf("the volume of sphere is :%f",volume);
    return 0;
}