#include <stdio.h>
unsigned long main() {
    unsigned long long n, m, gcd, lcm, i, x, y;
    scanf("%llu %llu", &n, &m);
    i=1;
    gcd=1;
    x=n;
    y=m;
    lcm=(m*n)/gcd;
    if (n<=m) {
        while (n>=i) {
            if (n%i==0 && m%i==0) {
                n=n/i;
                m=m/i;
                gcd=gcd*i;
                i=1;
            }
            i++;
        }
    }
    else if (m<=n) {
        while (m>=i) {
            if (n%i==0 && m%i==0) {
                n=n/i;
                m=m/i;
                gcd=gcd*i;
                i=1;
            }
            i++;
        }
    }
    lcm=(x*y)/gcd;
    printf("GCD: %llu\nLCM: %llu", gcd, lcm);
}