#include <stdio.h>
int main() {
    int n, check, start, left, right, code;
    scanf("%d", &n);
    check=(2*n)-1;
    start=1;
    left=n;
    right=1;
    if (n<=26) {
        if (n==0) {
            printf("-");
        }
        else if (n==1) {
            printf("a");
        }
        else if (n<0) {
            printf("-");
        }
        else {
            while (start<=check) {
                while (left>=1) {
                    printf("%c-", 96+left);
                    left--;
                    start++;
                }
                if (left==0) {
                    while (right<n) {
                      if (right==1) {
                        printf("%c", 97+right);
                      }
                      else {
                        printf("-%c", 97+right);
                      }
                        right++;
                        start++;
                    }
                }
            }
        }
    }
    else {
        printf("-");
    }
}