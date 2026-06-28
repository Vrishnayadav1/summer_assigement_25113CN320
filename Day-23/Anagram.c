#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i, j, len1 = 0, len2 = 0;
    int count1[256] = {0}, count2[256] = {0};

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    while(s1[len1] != '\0')
        len1++;
    while(s2[len2] != '\0')
        len2++;

    if(s1[len1-1]=='\n') len1--;
    if(s2[len2-1]=='\n') len2--;

    if(len1 != len2)
    {
        printf("Not Anagram");
        return 0;
    }

    for(i=0;i<len1;i++)
    {
        count1[s1[i]]++;
        count2[s2[i]]++;
    }

    for(i=0;i<256;i++)
    {
        if(count1[i] != count2[i])
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}