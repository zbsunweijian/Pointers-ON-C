
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


//��֤�Ƿ��ǻ��ģ�Ҫ�󳤶ȴ���=2������ǻ��ķ��ػ��ĳ���
int is_back_string(string &mi)
{
	//��ȡ���ĳ���
	string::size_type len = mi.size();

	if(len<2)
	return 0;

	string::iterator i = mi.begin(),b,f;

	if(len%2 == 0)
	{
		//�������2��������ż���򸳸���������ʼֵ
		f = i + len/2;
		b = i + len/2 -1;
	}
	else
	{
		//���������
		f = i + len/2 +1;
		b = i + len/2 -1;
	}

	for(;f != mi.end();f++)
	{
		if(*f != *b)
			break;

		if(b != mi.begin())
		b-- ;
	}

	if(f != mi.end())//���ǻ���
		return 0;

	return len;

}

int get_max_en(string &mi)
{
	/*��ȡ������ĳ���*/

	string::size_type maxlen = 0;

	for(string::iterator i = mi.begin();i != mi.end();i++)
	{
		string tem;

		for(string::iterator j = i + 1;j != mi.end();j++ )
		{
			tem = mi.substr(i-mi.begin(),j-i+1);

			if(is_back_string(tem) > maxlen)
				maxlen = is_back_string(tem);
		}

	}

	return maxlen;

}

int main()
{
	string s;

	cin>>s;
	cout<<get_max_en(s)<<endl;

	return 0;
}