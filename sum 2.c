#include<stdio.h>
#include<math.h>
int main()
{
	int m,n;
	int count = 0,sum = 0;
	int i,j,r;
	double k;
	int flag = 1,number = 0;
	printf("Please input two number:");
	scanf("%d,%d",&m,&n);
	for(i = m;i <= n;++i)
	{
//		k = sqrt(i);
//		flag = 1;
		for(j = 2;j <= i;++j)
		{
			r = i%j;
			if(r == 0)
			{
				flag = 0;
				break;
			}
		}
		if(j == i && i != 1)
		{
			sum += i;
			count ++;
		}			
	}
	printf("The count is %d and sum is %d\n",count,sum);
	return 0;
}