#include <stdio.h>

int main() {
    int n, sum;

    scanf("%d", &n);
    printf("enter the value of n");
    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &sum);

    printf("Pairs:\n");

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum)
                printf("(%d,%d)\n", arr[i], arr[j]);
        }
    }

    return 0;
}