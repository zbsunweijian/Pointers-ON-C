#include<stdio.h>
#include<math.h>
//#define TRUE 1;
//#define FALSE 0;
typedef enum BOOL{FALSE,TRUE}BOOL;
int GetNumber();
BOOL IsPrime(unsigned int n);

int GetNumber()
{
	int n;
	printf("Please input a number :");
	scanf("%d",&n);
	return n;
}
BOOL IsPrime(unsigned int n)
{
	unsigned int i,t;
	if(n <= 1)
		printf("IsPrime:Failed in testing the primality of %d.\n",n);
	if(n == 2)
		return TRUE;
	if(n%2 == 0)
		return FALSE;
	i = 3;
	t = (unsigned int)sqrt(n) + 1;
	while(i <= t)
	{
		if(n%i == 0)
			return FALSE;
		i += 2;
	}
	return TRUE;
}
int main()
{
	int n;
	int i,j = 0;
	n = GetNumber();
	printf("The primes between 2 and %d are :\n",n);
	for(i = 2;i < n;++i )
	{
		if(IsPrime(i))
		{
			printf("%d ",i);
			j++;
			if(j%5 == 0)
			{
				printf("\n");
			}
		}
	}
		if(j%5 != 0)
		{
			printf("\n");
		}
	return 0;

}