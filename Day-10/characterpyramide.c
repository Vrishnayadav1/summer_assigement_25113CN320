#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // 1. Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // 2. Print characters in increasing order (e.g., A -> B -> C)
        char ch = 'A';
        for (int k = 1; k <= i; k++) {
            printf("%c ", ch);
            ch++;
        }

        // 3. Print characters in decreasing order (e.g., B -> A)
        ch = ch - 2; // Move back to the previous character
        for (int l = 1; l < i; l++) {
            printf("%c ", ch);
            ch--;
        }

        // 4. Move to the next line
        printf("\n");
    }

    return 0;
}