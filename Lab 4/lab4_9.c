#include <stdio.h>
unsigned long check(int n) {
    if (n == 0)
        return 0;
    return n%2 + check(n/2)*10;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%lu", check(n));
}