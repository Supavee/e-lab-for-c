#include <stdio.h>
void main()
{
	int mins, days, hours, minutes;
	printf("Enter computer working time: ");
	scanf("%d", &mins);
	days = mins/1440;
	hours = mins/60-((days*1440)/60);
	minutes = mins-((days*1440)+(hours*60));
	printf(("It is %d days %d hours and %d minutes."), days, hours, minutes);
}