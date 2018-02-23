#include <stdio.h>
unsigned long main() {
    unsigned long n, i;
    int m, j, ch, check, count=0;
    scanf("%lu\n%d", &n, &m);
    i=n;
    check=m;
    if (n<1000000000 && m>=0 && m<=9) {
        for (j=0; j<9; j++) {
            if (i>=0) {
                ch=i%10;
                i=i/10; 
                if (check==ch) {
                    count++;
                }
            }
        }
        if (count==0) {
            printf("There is no \"%d\" in %lu.", m, n);
        }
        else if (count==1) {
            printf("There is only 1 \"%d\" in %lu.", m, n);
        }
        else {
            printf("There are %d \"%d\"(s) in %lu.", count, m, n);
        }
    }
}