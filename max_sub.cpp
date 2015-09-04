/*
求取两种递减数之和
*/
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int max_sub(int num)
{

	int sum=0;

	//首先获取绝对值
	if(num < 0)
		num = -num;

	string tem;
	vector<string> sub_data;
	stringstream  ss;

	//将int转换成string
	ss<<num;
	ss>>tem;

	//cout<<tem<<endl;

	for(string::iterator it = tem.begin();(it+1) != tem.end();it++)
	{
		string p;
		
		for(string::iterator i=it; (i+1) != tem.end() ;i++)
		{
			if(*i <= *(i+1))
			{
				break;
			}
			else
			{
			
				p = tem.substr(it-tem.begin(),i+1-it+1);
				sub_data.push_back(p);
			}
		}
	}


	vector<int> sub_num;
	for(vector<string>::iterator i=sub_data.begin();i!=sub_data.end();i++)
	{
		int a = atoi(i->c_str());
		sub_num.push_back(a);
		//cout<<*i<<endl;
	}

	sort( sub_num.begin(), sub_num.end());
	sub_num.erase(unique(sub_num.begin(), sub_num.end()),sub_num.end());

	sum += *(sub_num.end()-1);


	int max=0;
	vector<int>::iterator m=sub_num.begin();
	for(vector<int>::iterator i=sub_num.begin();i!=sub_num.end();i++)
	{
		int a=*i,k=0;
		while(a)
		{
			k += a%10;
			a = a/10;
		}
		if(k>max)
		{
			max = k;
			m=i;
		}

	}

	sum += *m;

	//cout<<sum<<endl;
	return sum;
	
}



#define MAX_SRTING_LENGTH 1000

int main()
{

	int k;
	cin>>k;
	
	cout<<max_sub(k)<<endl;

	

	return 0;
}