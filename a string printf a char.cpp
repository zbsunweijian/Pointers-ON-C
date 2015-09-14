#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[1024];
	int temp[256] = {0};
	int i = 0;
	gets(a);
	while(a[i] != '\0')
	{
		temp[a[i++]] = 1;
	}
	for(i = 0;i < 256; i++)
	{
		if(temp[i])	
			printf("%c",i);
	}
	return 0;
}