int Search(int A[],int len)
{
	if(NULL==A || len<=0)
	{
		return-1;
	}

	int k, j=0;
	for(int i=0;i<len;++i)
	{
		if(j==0)
		{
			k=A[i];
		}
		if(k==A[i])
		{
			++j;
		}
		else
		{
			--j;
		}
	}
	return k;
}