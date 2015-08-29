#include<stdio.h>
#define MAXNUM 1000  //1000以内的素数
int main(void)
{
	int i,j,c = 0;
	int prime[MAXNUM+1];
	for(i = 2;i <= MAXNUM;i++)
	{
		prime[i] = 1;
	}

	for(i = 2; i*i <= MAXNUM; i++)
	{
		if(prime[i] == 1)
		{
			for(j = 2*i;j <+ MAXNUM;j++)
			{
				if(!prime[j]) continue;
				if(j%i == 0)
					prime[j] = 0;
			}
		}
	}
	for(i = 2;i < MAXNUM;i++)
	{
		if(prime[i] == 1)
		{
			printf("%4d ",i);
			c++;
			if(c%10 == 0)
				printf("\n");
		}
	}
	printf("\n共有%d个数为素数！",c);
	getchar();
	return 0;
}
