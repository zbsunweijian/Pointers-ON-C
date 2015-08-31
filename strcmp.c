#include<stdio.h>
#include<string.h>

void f(char **p,int n)
{
	int i,j,min;
	char *t;
	for(i = 0;i<n-1;i++)
	{
		min = i;
		for(j = i+1;j <= n-1;j++)
		{
			if(strcmp(p[j],p[min])<0)
				min = j;
		}
		t=p[i];
		p[i]=p[min];
		p[min]=t;
	}
}

void main()
{
	int i;
	char a[4][100],*b[4];
	for(i=0;i<4;i++)
	{
		gets(a[i]);
		b[i]=a[i];
	}
	f(b,4);
	for(i=0;i<4;i++)
		puts(b[i]);
}