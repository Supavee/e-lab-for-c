#include <stdio.h>
int main() {
    float tax, taxf, taxl, total;
    scanf("%f", &tax);
    if (tax>=0){
        if (tax<=300000){
            total=(tax*5)/100;
            printf("%.2f", total);
        }
        else {
            taxf=15000;
            taxl=tax-300000;
            total=(taxl*10)/100+taxf;
            printf("%.2f", total);
        }
    }
    else {
        printf("Error: Salary must be greater or equal to 0");
    }
}