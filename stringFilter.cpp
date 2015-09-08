//通过键盘输入一串小写字母(a~z)组成的字符串
//请编写一个字符串过滤程序，若字符串中出现多个相同的字符，将非首次出现的字符过滤掉
//比如字符串“abacacde”过滤结果为“abcde”

#include <iostream>
#include <string>

using namespace std;

//输入	pInputStr：  输入字符串      
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