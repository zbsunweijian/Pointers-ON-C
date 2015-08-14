CMyString& CMyString::operator = (const CMyString &str)
{
	if(this != &str)
	{
		CMyString strTemp(str);
		
		char* pTemp = strTemp.m_pData;
		strTemp.m_pData = m_pData;
		m_pData = pTemp;
	}
	return *this;
}