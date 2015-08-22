#include<stdio.h>
#include<stdlib.h>

double ComputePi();

double ComputePi()
{
	int n = 1;
	double sum = 0.0;
	double i,j = 1;
	for(i = 0; i < 1000; ++i)
	{
		
		sum +=(double)(j/(2*i + 1));
		j = -j;
	}
	return 4*sum;
}
int main()
{
	printf("Pi = %lf\n",ComputePi());
	return 0;
}