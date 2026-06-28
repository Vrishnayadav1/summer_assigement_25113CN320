#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i=0,j;

    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0')
        i++;

    if(str[i-1]=='\n')
        i--;

    j=0;

    for(int k=i-1;k>=0;k--)
        rev[j++]=str[k];

    rev[j]='\0';

    printf("Reverse String = %s",rev);

    return 0;
}