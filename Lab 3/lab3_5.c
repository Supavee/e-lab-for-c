#include <stdio.h>
#include <math.h>

int fibo(int n)
{
    return ((pow(((1+sqrt(5))/2),n)-pow((1-(1+sqrt(5))/2),n))/sqrt(5));
}

void main()
{
    int n, i;
    scanf("%d", &n);
    for (i=0; n>=i; i++) {
        printf("F(%d) = %d\n", i, fibo(i));
    }
}