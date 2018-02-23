#include <stdio.h>
void main()
{
    int num, fifty, twenty, five, one;
    printf("Enter an amount: ");
    scanf("%d", &num);
    fifty=num/50;
    twenty=(num-(fifty*50))/20;
    five=(num-(fifty*50)-(twenty*20))/5;
    one=num-(fifty*50)-(twenty*20)-(five*5);
    printf("1: %d\n5: %d\n20: %d\n50: %d\n", one, five, twenty, fifty);
}