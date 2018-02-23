#include <stdio.h>

int is_prime(int i) {
    int x=1, check=0;
    while (i>=x) {
        if (i%x==0) {
            check++;
            x++;
        }
        else {
            x++;
        }
    }
    if (check==2) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int i, n;
    scanf("%d", &n);
    for (i=1; n>=i; i++) {
        if (is_prime(i))
            printf("%d is a prime number.\n", i);
    }
    return 0;
}