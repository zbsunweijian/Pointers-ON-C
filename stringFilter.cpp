//ͨ����������һ��Сд��ĸ(a~z)��ɵ��ַ���
//���дһ���ַ������˳������ַ����г��ֶ����ͬ���ַ��������״γ��ֵ��ַ����˵�
//�����ַ�����abacacde�����˽��Ϊ��abcde��

#include <iostream>
#include <string>

using namespace std;

//����	pInputStr��  �����ַ���      
void stringFilter(string &strInput)
{
	for (int i=0; i!=strInput.size()-1; ++i)
	{
		int j = i+1;
		while (j < strInput.size())
		{
			if (strInput[i] == strInput[j])
			{
				strInput.erase(j, 1);
			}
			else
			{
				++j;
			}
		}
	}
}

void main()
{
	string strInput;
	cin>>strInput;
	stringFilter(strInput);
	cout<<strInput;
	system("pause");
}