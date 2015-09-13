#include<stdio.h>

int main(void)
{
	int num,day;
	num = 1;
	int i = 0;
	scanf("%d",&day);
	for(i= 1;i < day; i++)
	{
		num = (num + 1)*2;
	}
	printf("%d\n",num);
	return 0;
}