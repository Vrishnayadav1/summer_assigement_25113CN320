#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("enter all values");

    scanf("%d", &n1);
    int a[n1];
    for(int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2];
    for(int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    scanf("%d", &n3);
    int c[n3];
    for(int i = 0; i < n3; i++)
        scanf("%d", &c[i]);

    printf("Common Elements: ");

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            for(int k = 0; k < n3; k++) {
                if(a[i] == b[j] && b[j] == c[k]) {
                    printf("%d ", a[i]);
                    goto next;
                }
            }
        }
        next:;
    }

    return 0;
}