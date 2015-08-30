#include<stdio.h>

int gcd(int m,int n)
{
	int r;
	r = m%n;
	if(r == 0)
		return n;
	else
		gcd(n,r);
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d\n",gcd(m,n));
	getchar();
	return 0;
}