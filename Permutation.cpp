void Permutation(char* pStr)
{
	if(pStr == NULL)
		return;
	
	Permutation(pStr,pStr);
}

void Permutation(char* pStr,char* pBegin)
{
	if(*pBegin == '\0')
	{
		printf("%S\n",pStr);
	}
	else 
	{
		for(char* pCh = pBegin;*pCh != '\0';++pCh)
		{
			char temp = *pCh;
			*pCh = *pBegin;
			*pBegin = temp;
			
			Permutation(pStr,pBegin+1)
			
			temp = *pCh;
			*pCh = *pBegin;
			*pBegin = temp;
		}
	}
}