#include <stdio.h>
int main()
{
  int stamp, total, percents;
  float price, amount, amount_d;
  scanf("%d", &stamp);
  scanf("%f", &price);
  if (stamp==0) {
  	total=0;
  	percents=0;
    amount_d=0;
    if (price>0){
        amount_d=price;
    }
  }
  else if (stamp>0 && 2>stamp) {
  	total=0;
  	percents=10;
  	amount=price*(10.0/100);
  	amount_d=price-amount;
  }
  else if (stamp>1 && 3>stamp) {
  	total=0;
  	percents=15;
  	amount=price*(15.0/100);
  	amount_d=price-amount;
  }
  else if (stamp>2 && 6>stamp) {
  	total=stamp-3;
  	percents=20;
  	amount=price*(20.0/100);
  	amount_d=price-amount;
  }
  else if (stamp>5 && 9>stamp) {
  	total=stamp-6;
  	percents=30;
  	amount=price*(30.0/100);
  	amount_d=price-amount;
  }
  else {
  	total=stamp-9;
  	percents=40;
  	amount=price*(40.0/100);
  	amount_d=price-amount;
  }
  printf("You get %d percents discount.\n", percents);
  printf("Total amount due is %.2f Baht.\n", amount_d);
  printf("And you have %d stickers left.\n", total);
}