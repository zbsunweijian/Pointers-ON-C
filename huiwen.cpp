#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[100];
	int s;
	int i = 0;
	int j = 0;
	gets(a);
	s = strlen(a);
	for(i = 0,j = s-1;i <= j;i++,j--)
	{
		if(a[i] != a[j])
			break;
	}
		if(i >= j)
			printf("right\n");
		else
			printf("wrong\n");
	
	return 0;
}