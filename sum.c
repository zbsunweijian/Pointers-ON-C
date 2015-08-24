#include<stdio.h>
int main()
{
	int n;
	double mu = 1,zi = 2,t = 0;
	double sum = 0;
	int i;
	printf("Please input a mumber:");
	scanf("%d",&n);
	for(i = 1;i <= n;++i)
	{
		sum = sum + (zi/mu); 
		t = mu + zi;
		mu = zi;
		zi = t;
	}
	printf("The sum is %.2f\n",sum);
	

	return 0;
}