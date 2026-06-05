#include <stdio.h>

int main() {
    int n, i, j, prime, largestPrime = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        prime = 1;

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime) {
            largestPrime = i;
        }
    }

    printf("Largest prime number up to %d is %d", n, largestPrime);

    return 0;
}