#include <stdio.h>
int main() {
    int i, j;
    
    for (i = 0; i < 7; i++) {
        
        // S
        for (j = 0; j < 5; j++) {
            if (
                ((i == 0 || i == 3 || i == 6) && (j > 0 && j < 4)) ||
                (j == 0 && (i > 0 && i < 3)) ||
                (j == 4 && (i > 3 && i < 6))
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");

        // O
        for (j = 0; j < 5; j++) {
            if (
                ((j == 0 || j == 4) && (i != 0 && i != 6)) ||
                ((i == 0 || i == 6) && (j > 0 && j < 4))
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");

        // U
        for (j = 0; j < 5; j++) {
            if (
                ((j == 0 || j == 4) && i != 6) ||
                (i == 6 && (j > 0 && j < 4))
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");
        
        // R
        for (j = 0; j < 5; j++) {
            if (
                j == 0 ||
                ((i == 0 || i == 3) && j < 4) ||
                (j == 4 && (i > 0 && i < 3)) ||
                (i > 3 && i - j == 2)
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");

        // A
        for (j = 0; j < 5; j++) {
            if (
                ((j == 0 || j == 4) && i != 0) ||
                ((i == 0 || i == 3) && (j > 0 && j < 4))
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");

        // V
        for (j = 0; j < 5; j++) {
            if (
                ((j == 0 || j == 4) && i < 4) ||
                ((j == 1 || j == 3) && i == 5) ||
                (j == 2 && i == 6)
            ) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    return 0;
}