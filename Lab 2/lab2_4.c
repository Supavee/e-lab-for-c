#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter length of side A: ");
    scanf("%d", &a);
    printf("Enter length of side B: ");
    scanf("%d", &b);
    printf("Enter length of side C: ");
    scanf("%d", &c);
    if (a==0 || b==0 || c==0){
        printf("Triangle type is invalid.");
    }
    else if (a+b<=c || a+c<=b || b+c<=a) {
        printf("Triangle type is invalid.");
    }
    else if (a==b && b==c && c==a) {
        printf("Triangle type is equilateral.");
    }
    else if ((a==b && a+b>c) || (b==c && b+c>a) || (a==c && a+c>b)) {
        printf("Triangle type is isosceles.");
    }
    else if (a!=b && b!=c && a!=c) {
        printf("Triangle type is scalene.");
    }
    else {
        printf("Triangle type is invalid.");
    }
}