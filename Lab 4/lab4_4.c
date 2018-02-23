#include <stdio.h>
int main() {
    int w, h, i, j;
    scanf("%d\n%d", &w, &h);
    for (i=0; i<w; i++) {
        printf("*");
    }
    printf("\n");
    for (i=1; i<h-1; i++) {
        for (j=0; j<i; j++) {
            printf(" ");
        }
        printf("*");
        for (j=0; j<w-2; j++) {
            printf(" ");
        }
        printf("*\n");
    }
    for (i=0; i<h-1; i++) {
        printf(" ");
    }
    for (i=0; i<w; i++) {
        printf("*");
    }
}