#include <stdio.h>
int main(){
    int l = 3 , b = 4 , area , perimeter;
    area = l * b;
    perimeter = 2 *(l + b);
    if(area>perimeter){
        printf("area is greater than perimeter");
    }
    else{
        printf("area is not greater than perimeter");
    }

}