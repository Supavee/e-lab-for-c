#include <stdio.h>
int main() {
    int i;
    float n, amount, collect, save;
    printf("Enter your goal amount: ");
    scanf("%f", &amount);
    for (i=1; amount>0; i++) {
        printf("Enter money collected today: ");
        scanf("%f", &collect);
        save+=collect;
        amount-=collect;
        if (amount<0) {
            if (i==1) {
                printf("Congratulations! You take %d day to reach your goal.", i);
                break;
            }
            else {
                printf("Congratulations! You take %d days to reach your goal.", i);
                break;
            }
        }
        if (amount>=0) {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", i, save, amount);
        }
    }
}