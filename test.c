#include<stdio.h>
#include<stdlib.h>
//#include"calendar.h"

typedef enum __BOOL{FALSE,TRUE}BOOL;
void Welcome();
int GetYear();
int GetMonth();
void PrintCalendar(int year,int month);
BOOL IsLeapYear(int year);
 int CalculateDaysbefore(int year);
int CalculateDaysOfMonth(int year,int month);
int CalculateFirstWeekday(int year,int month);


int main()
{
	int year,month;
	Welcome();
//	year = GetYear();
	printf("Please input the year:");
	scanf("%d",&year);

//	month = GetMonth();
	printf("Pleasr input the month:");
	scanf("%d",&month);

	PrintCalendar(year,month);
	return 0;
}



static const int START_YEAR = 2010;
static const int START_WEEKDAY = 5;

void Welcome()
{
	printf("This program receives a year and a month,");
	printf("and then prints the calendar.\n");
}

int GerYear()
{
	int year;
	printf("Please input the year:");
	scanf("%d",&year);
	while(year < START_YEAR)
	{
		printf("The year can't be earlier than then %d\n",START_YEAR);
		printf("Please input the year:");
		scanf("%d",&year);
	}
	return year;
}

int GerMonth()
{
	int month;
	printf("Pleasr input the month:");
	scanf("%d",&month);
	while(month < 1 || month > 12)
	{
		printf("The month should be between 1-12.\n");
		printf("Please input the month:");
		scanf("%d",&month);
	}
	return month;
}

void PrintCalendar(int year,int month)
{
	int weekday,days_of_month;
	int i;
	weekday = CalculateFirstWeekday(year,month);
	days_of_month = CalculateDaysOfMonth(year,month);
	printf("Calender %4d-%2.2d\n",year,month);
	printf("-------------------------------------\n");
	printf(" Su Mo Tu We Th Fr Sa \n");
	printf("--------------------------------------\n");
	for(i = 0;i < weekday;++i)
		printf(" ");
	for(i = 0;i < days_of_month;++i)
	{
		printf("%3d",i);
		if((i + weekday) % 7 == 0 && i != days_of_month)
			printf("\n");
	}
	printf("---------------------------------------\n");
}

BOOL IsLeapYear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0);
}

int CalculateDaysBefore(int year)
{
	int i;
	int days_before = 0;
	if(year == START_YEAR)
		return 0;
	else
	{
		for(i = START_YEAR;i < year;++i)
		{
			if(IsLeapYear(i))
				days_before += 366;
			else
				days_before += 365;
		}
	}
	return days_before;
}

int CalculateDaysOfMonth(int year,int month)
{
	if(month == 1 || month == 3 || month == 5 || month == 8 || month == 10 || month == 12)
		return 31;
	else if(month != 2)
		return 30;
	else
		return 28 + (int)IsLeapYear(year);
}

int CalculateFirstWeekday(int year,int month)
{
	int i,days_before;
	days_before = CalculateDaysbefore(year);
	if(month >=2)
		for(i = 1;i < month;i++)
			days_before += CalculateDaysOfMonth(year,i);
	return (days_before + START_WEEKDAY) % 7;
}



