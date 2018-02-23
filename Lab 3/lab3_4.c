#include <stdio.h>
int main() {
    int n, m, i, j, up, down;
    i=2;
    j=0;
    scanf("%d/%d", &n, &m);
    if (n>=0 && m>=0 && 10000>=n && 10000>=m) {
        if (m==1) {
            printf("= %d", n);
        }
        else if (n%m==0) {
            if (n==0) {
                printf("0");
            }
            else {
                printf("= %d", n/m);
            }
        }
        else if (n==1) {
            printf("= %d/%d", n, m);
        }
        else {
            while (i<=n) {
                if (n%i==0 && m%i==0) {
                    up=n/i;
                    down=m/i;
                    j+=1;
                }
                i++;
            }
            if (j==0) {
                printf("= %d/%d", n, m);
            }
            else {
                printf("= %d/%d", up, down);
            }
        }
    }
}