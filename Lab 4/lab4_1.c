#include <stdio.h>
int main() {
    int num, n, i=0, j=3, k, bi[4];
    scanf("%d", &num);
    n=num;
    while (j>=i) {
        bi[i]=num%2;
        num=num/2;
        i++;
    }
    printf("Binary number of %d is ", n);
    for (k=3; k>=0; k--) {
        printf("%d", bi[k]);
    }
    printf(".");
}