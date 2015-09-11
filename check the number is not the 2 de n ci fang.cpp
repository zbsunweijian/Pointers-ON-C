#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void)
{
	char a[1024];
	char ch;
	int n[1024]={0};
	int count = 0;
	int i = 0,j=0;
	int t = 0;
	int s;
	gets(a);
	int	num = strlen(a);
//实现字符串到数组的转换
	for(i = 0;i < num;i++)
	{
		if(a[i] != ',')
		{
			n[j] = n[j]*10 + (a[i]-'0');
		}
		else

		j++;
	}
	for(i = 0;i<=j;i++)
	{
		printf("%d\n",n[i]);
		if(n[i] == 1)
		{
			count++;
		}
		else
		{
			for(t = 1;t <= n[i];t=t*2)
			{
				if(t == n[i])
					count++;
			}
		}
	}
	printf("%d\n",count);
	return 0;
}