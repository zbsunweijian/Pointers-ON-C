//	��֪2��������·������AΪ���ߣ�BΪ��������·����·����˫��ġ�
//	������վ�����ֱ����£������߽���Ļ��˵���T1��T2��ʾ��
//	��д����������������վ�����ƣ������������������Ҫ�����ĳ�վ������������������յ㣬����վ��ֻ����һ�Σ���
//	������A�����ߣ�������վ��A1 A2 A3 A4 A5 A6 A7 A8 A9 T1 A10 A11 A12 A13 T2 A14 A15 A16 A17 A18
//	������B��ֱ�ߣ�������վ��B1 B2 B3 B4 B5 T1 B6 B7 B8 B9 B10 T2 B11 B12 B13 B14 B15
#include <string>
#include <vector>
#include <iostream>

using namespace std;

#define INF 100
#define NUM_STATION_A	21
#define NUM_STATION_B	17
#define NUM_STATION	35

int FindStationIndex(vector<string>::iterator first, vector<string>::iterator last, string station)
{
	vector<string>::iterator temp = first;
	while (temp != last)
	{
		if (*temp == station)
		{
			return (temp-first);
		}
		temp++;
	}

	return -1;
}

void main()
{
	vector<string> vecStationA;	//����A��վ��,��21��վ�㣨ʵ�ʹ�20��վ�㣬A1վ������β������һ�Σ���ʾ����AΪ���ߣ�
	vector<string> vecStationB;	//����B��վ�㣬��17��վ��
	vector<string> vecStation;		//����A��B����վ�㣬��35��վ�㣨��ȥ��A��B�����غϵ�T1��T2վ�㣩

	vecStationA.push_back("A1");
	vecStationA.push_back("A2");
	vecStationA.push_back("A3");
	vecStationA.push_back("A4");
	vecStationA.push_back("A5");
	vecStationA.push_back("A6");
	vecStationA.push_back("A7");
	vecStationA.push_back("A8");
	vecStationA.push_back("A9");
	vecStationA.push_back("T1");
	vecStationA.push_back("A10");
	vecStationA.push_back("A11");
	vecStationA.push_back("A12");
	vecStationA.push_back("A13");
	vecStationA.push_back("T2");
	vecStationA.push_back("A14");
	vecStationA.push_back("A15");
	vecStationA.push_back("A16");
	vecStationA.push_back("A17");
	vecStationA.push_back("A18");
	vecStationA.push_back("A1");

	vecStationB.push_back("B1");
	vecStationB.push_back("B2");
	vecStationB.push_back("B3");
	vecStationB.push_back("B4");
	vecStationB.push_back("B5");
	vecStationB.push_back("T1");
	vecStationB.push_back("B6");
	vecStationB.push_back("B7");
	vecStationB.push_back("B8");
	vecStationB.push_back("B9");
	vecStationB.push_back("B10");
	vecStationB.push_back("T2");
	vecStationB.push_back("B11");
	vecStationB.push_back("B12");
	vecStationB.push_back("B13");
	vecStationB.push_back("B14");
	vecStationB.push_back("B15");

	vecStation.push_back("A1");
	vecStation.push_back("A2");
	vecStation.push_back("A3");
	vecStation.push_back("A4");
	vecStation.push_back("A5");
	vecStation.push_back("A6");
	vecStation.push_back("A7");
	vecStation.push_back("A8");
	vecStation.push_back("A9");
	vecStation.push_back("T1");
	vecStation.push_back("A10");
	vecStation.push_back("A11");
	vecStation.push_back("A12");
	vecStation.push_back("A13");
	vecStation.push_back("T2");
	vecStation.push_back("A14");
	vecStation.push_back("A15");
	vecStation.push_back("A16");
	vecStation.push_back("A17");
	vecStation.push_back("A18");
	vecStation.push_back("B1");
	vecStation.push_back("B2");
	vecStation.push_back("B3");
	vecStation.push_back("B4");
	vecStation.push_back("B5");
	vecStation.push_back("B6");
	vecStation.push_back("B7");
	vecStation.push_back("B8");
	vecStation.push_back("B9");
	vecStation.push_back("B10");
	vecStation.push_back("B11");
	vecStation.push_back("B12");
	vecStation.push_back("B13");
	vecStation.push_back("B14");
	vecStation.push_back("B15");
	
	int edges[35][35];	//������Ÿ�վ������̾���
	
	for (int i=0; i<NUM_STATION; i++)
	{
		for (int j=0; j<NUM_STATION; j++)
		{
			edges[i][j] = INF;
		}
	}
	for (int i=0; i<NUM_STATION; i++)
	{
		edges[i][i] = 0;	//��ͬվ���ľ�������Ϊ0
	}
	

	//����վ���ľ�������Ϊ1��A����B����ֱ�����
	//����A�������ڵ�վ�㣬�����ó�ʼ·������Ϊ1
	for (int index=0; index<NUM_STATION_A-1; index++)	
	{
		int i = FindStationIndex(vecStation.begin(), vecStation.end(), vecStationA[index]);
		int j = FindStationIndex(vecStation.begin(), vecStation.end(), vecStationA[index+1]);

		edges[i][j] = 1;
		edges[j][i] = 1;
	}

	//����B�������ڵ�վ�㣬�����ó�ʼ·������Ϊ1
	for (int index=0; index<NUM_STATION_B-1; index++)
	{
		int i = FindStationIndex(vecStation.begin(), vecStation.end(), vecStationB[index]);
		int j = FindStationIndex(vecStation.begin(), vecStation.end(), vecStationB[index+1]);

		edges[i][j] = 1;
		edges[j][i] = 1;
	}

	for (int k=0; k<NUM_STATION; k++)
	{
		for (int i=0; i<NUM_STATION; i++)
		{
			for (int j=0; j<NUM_STATION; j++)
			{
				if (edges[i][j] > edges[i][k]+edges[k][j])
				{
					edges[i][j] = edges[i][k]+edges[k][j];
				}
			}
		}
	}


	string startStation, endStation;
	cin>>startStation>>endStation;

	int i = FindStationIndex(vecStation.begin(), vecStation.end(), startStation);
	int j = FindStationIndex(vecStation.begin(), vecStation.end(), endStation);

	cout<<edges[i][j]+1;	//��ĿҪ��վ�������������յ�

	system("pause");
}