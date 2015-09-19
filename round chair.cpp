#include<stdio.h>
#include<math.h>

int main(void)
{
	int a[5] = {0};
	int n = 5;
	int i = 0;
	int num = 0;
	int n1 = 0;
	double l = 0;
	for(i = 0;i <5;i++)
	{
		scanf("%d",&a[i]);
	}

	n1 = (a[1]-a[3])*(a[1]-a[3])+(a[2]-a[4])*(a[2]-a[4]);
	l = sqrt((double)n1);
	num = (int)l/(a[0]*2);
	if((int)l%a[0] == 0)
	{
		printf("%d",num);
	}
	else if((int)l%a[0] >= a[0])
	{
		printf("%d",num+1);
	}
	else
	{
		printf("%d",num+2);
	}
	return 0;
}