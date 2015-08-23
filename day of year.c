#include<stdio.h>
int main()
{
	int year,month,day;
	int leap;
	printf("Please input the year month day: ");
	scanf("%d,%d,%d",&year,&month,&day);
	if(((year%4==0)&&(year%100!=0)) || ((year%400)==0))
		leap = 1;
	else
		leap = 0;
	switch(month)
	{
	case 1:day = day;break;
	case 2:day = 31 + day;break;
	case 3:day = 31 + 28 + leap + day;break;
	case 4:day = 31 + 28 + leap + 31 + day;break;
	case 5:day = 31 + 28 + leap + 31 + 30 + day;break;
	case 6:day = 31 + 28 + leap + 31 + 30 + 31 + day;break;
	case 7:day = 31 + 28 + leap + 31 + 30 + 31 + 30+ day;break;
	case 8:day = 31 + 28 + leap + 31 + 30 + 31+ 30 + 31 + day;break;
	case 9:day = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + day;break;
	case 10:day = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;break;
	case 11:day = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;break;
	case 12:day = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;break;
	}
	printf("The day is the %d th of %d\n",day,year);
	return 0;
}