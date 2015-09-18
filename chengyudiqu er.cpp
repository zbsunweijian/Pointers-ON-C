#include<stdio.h>
#include<string.h>

int main()
{
	char ch;
	char a[1024];
	char b[1024];
	char c;
	int i = 0;
	int j = 0;
	int flag = 0;
	while((ch = getchar()) != '\n')
	{
		if(ch != ' '&& ch != ','&& ch != '.'&& ch != '?'&& ch != '!'&& ch != ';')
		{
			b[j] = ch;
			++j;

//			if(ch == 'y' || ch == 'Y' || ch == 'w' || ch == 'W')
//			{
//				flag = 1;
//
//			}
		}
		else
		{

			j = 0;
//			b = ch;
		}
		strcat(a,b);
		if(flag == 0)
		{
			a[i] = ch;
			i++;
		}
	}
	a[i] = '\0';
	puts(a);
	return 0;
}