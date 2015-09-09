#include <iostream>
#include <stack>

#define  MAX_SIZE 300
using namespace std;

typedef struct
{
	int begin;
	int end;
}Edge;

void main()
{
	int numNode;		//总结点数
	int numLeafNode;	//叶子结点数
	int numEdge;		//边数
	int visit[MAX_SIZE];
	Edge edges[MAX_SIZE];	//边

	int sequence[MAX_SIZE];

	memset(visit, 0, MAX_SIZE);

	cin>>numNode;
	numEdge = numNode-1;
	//读入边的起点和终点
	for (int i=0; i<numEdge; ++i)
	{
		cin>>edges[i].begin>>edges[i].end;
	}

	for (int i=0; i<numEdge-1; ++i)
	{
		for (int j=i+1; j<numEdge; ++j)
		{
			if (edges[i].begin >edges[j].begin)
			{
				Edge temp = edges[i];
				edges[i] = edges[j];
				edges[j] = temp;
			}
		}
	}

	int num = 1;
	for (int i=0; i<numEdge; ++i)
	{	
		if (edges[i].begin != edges[i+1].begin)
		{
			++num;
		}
	}
	numLeafNode = numNode - num;

	for (int i=0; i<numLeafNode; ++i)
	{
		cin>>sequence[i];
	}


	stack<int> stackSeq;	//结点遍历顺序
	stackSeq.push(edges[0].begin);
	stackSeq.push(edges[0].end);
	visit[0] = 1; 

	


}