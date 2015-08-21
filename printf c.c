#include<stdio.h>
int main(void)
{
	int n;
	int i = 0,j = 0;
	char c;
	scanf("%d %c",&n,&c);
	for(i = 0;i < (n+1)/2;++i)
	{
		for(j = 0;j < n;++j)
		{
			if(i == 0 || i == (n - 1)/2)
				printf("%c",c);
			else if(j == 0 || j == (n-1))
				printf("%c",c);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}