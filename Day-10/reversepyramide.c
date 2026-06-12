#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for the number of rows (counting down)
    for (int i = rows; i >= 1; i--) {
        
        // 1. Inner loop to print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // 2. Inner loop to print asterisks
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // 3. Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}