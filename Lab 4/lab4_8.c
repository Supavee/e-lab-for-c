#include <stdio.h>
int main() {
    int n,i,j,k=1;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++)
            printf("*");
        printf("\n");
    }
    for (i=n; i>0; i--) {
        for (j=n-k; j>0; j--) {
            printf("*");
        }
        printf("\n");
        k++;
    }
}