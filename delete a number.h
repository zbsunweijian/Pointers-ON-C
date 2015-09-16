#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[1024];
	int n[1024] = {0};
	int i,j,l,t;
	j = 0;
	gets(a);
	l = strlen(a);
	for(i = 0;i < l; i++)
	{
		if(a[i] != ',')
			n[j] = n[j] * 10 + (a[i] - '0');
		else 
			j++;
	}	
	for(i = 0; i <= j;i++)
	{
		for(t = 0;t <= j;t++)
		{
			if((n[i]%n[t] == 0) && (n[t] != n[i]))
			{
				printf("%d ",n[i]);
				break;
			}
		}
	}
	return 0;
}
