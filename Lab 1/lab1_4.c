#include <stdio.h>
void main()
{
	float rad, volume;
	printf("Please enter radius: ");
	scanf("%f", &rad);
    volume = (4.0/3.0)*(22.0/7.0)*rad*rad*rad;
	printf(("The volume of this sphere is %.2f"), volume);
}