#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[1000];
	int b[1000]={0};
	int n = 0;
	int i;
	int j = 0;
	int sum1=0;
	int sum0=0;
	gets(a);
	n = strlen(a);
	for(i = 0;i < n;i++)
	{
		if(a[i] != ',')
			b[j] = b[j]*10 + (a[i] - '0');
		else
			j++;
	}
	
	for(i = 0;i <= j;i++)
	{
		if(b[i]%2 == 0)
		{
			sum0 += b[i];
		}
		else
		{
			sum1 += b[i];
		}
	}
	printf("%d %d",sum1,sum0);
	return 0;
}