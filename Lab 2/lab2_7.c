#include <stdio.h>
#include <math.h>
int main() {
    int pizza, pepper, cheese, mush, dia;
    float cost, area, price, extra;
    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    scanf("%d", &pizza);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    scanf("%d", &pepper);
    printf("Extra cheese? (1=yes, 0=no): ");
    scanf("%d", &cheese);
    printf("Extra mushroom? (1=yes, 0=no): ");
    scanf("%d", &mush);

    if (pizza==1) {
        dia=10.0;
        extra=0;
        if (pepper==1) {
            extra=extra+0.5;
        }
        if (cheese==1) {
            extra=extra+0.25;
        }
        if (mush==1) {
            extra=extra+0.30;
        }
    }
    else if (pizza==2) {
        dia=16.0;
        extra=0;
        if (pepper==1) {
            extra=extra+0.5;
        }
        if (cheese==1) {
            extra=extra+0.25;
        }
        if (mush==1) {
            extra=extra+0.30;
        }
    }
    else if (pizza==3) {
        dia=20.0;
        extra=0;
        if (pepper==1) {
            extra=extra+0.5;
        }
        if (cheese==1) {
            extra=extra+0.25;
        }
        if (mush==1) {
            extra=extra+0.30;
        }
    }
    else if (pizza==0) {
        dia=0;
        extra=0;
        if (pepper==1) {
            extra=extra+0.5;
        }
        if (cheese==1) {
            extra=extra+0.25;
        }
        if (mush==1) {
            extra=extra+0.30;
        }
    }
    else {
        
    }
    area=(M_PI*(dia*dia))/4.0;
    cost=5.0+(2.0*area)+(extra*area);
    price=1.5*cost;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\nYour order costs %.2f baht.\nThank you.", price);
}