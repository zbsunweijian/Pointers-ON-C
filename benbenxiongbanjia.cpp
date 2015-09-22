#include <iostream>
#include <stack>

using namespace std;

#define MAX_SIZE 65535

typedef struct
{
	int x;
	int y;
	int dir = 0;
}Pos;

int inc[4][2] = 
{
	{1, 0},
	{0, 1},
	{-1, 0},
	{0, -1}
};


void main()
{
	char map[MAX_SIZE][MAX_SIZE];
	char state[MAX_SIZE][MAX_SIZE];
	Pos start;
	memset(map, '#', sizeof(map)/sizeof(char));
	memset(state, 1, sizeof(state)/sizeof(char));

	int row, col;
	cin>>row>>col;

	for (int i=1; i<=row; ++i)
	{
		for (int j=1; j<=col; ++j)
		{
			cin>>map[i][j];

			if (map[i][j] == 'B')
			{
				start.x = i;
				start.y = j;
				start.dir = 0;
			}
		}
		char temp;
		cin>>temp;
	}

	stack<Pos> path;
	path.push(start);
	int dir = 0;

	Pos temp = path.top();
	
	
	while (true)
		{
			int x = curPos.x;
			int y = curPos.y;
			int dir = curPos.dir;

			stackWord.pop();
			state[x][y] = 0;

			while (dir<5)		//ÿ��λ�����ĸ�������������Ϊ1������Ϊ2������Ϊ3������Ϊ4
							//����4˵����λ����Χû��Ҫ���ҵ�Ԫ��
			{
				Offset move;
				GetOffset(move, dir);	//��ȡ��һ��λ�õ�ƫ����
				int next_x = x+move.inc_x;
				int next_y = y+move.inc_y;

				if (next_x<0 || next_x>=maxRow|| next_y<0 || next_y>=maxCol)	//�߽�����
				{
					dir++;
				}
				else if (maze[next_x][next_y]==strFind[stackWord.size()+1] && state[next_x][next_y]==0)
				{
					state[x][y] = 1;
					curPos.x = x;
					curPos.y = y;
					curPos.dir = dir;
					stackWord.push(curPos);	//����һ��Ԫ����Χ�ҵ��ַ����ж�Ӧ����һ����ĸ�󣬲Ž���Ԫ��ѹջ
											//�ҵ���2����ĸʱ��ջ��Ԫ����Ϊ1���ҵ���n����ĸʱ��ջ��Ԫ����Ϊn-1
					x = next_x;
					y = next_y;
					dir = 1;
				}
				else
				{
					dir++;
				}

				if (stackWord.size() == strFind.size()-1)	//��ʱ���ҵ�ȫ����Ԫ��
				{
					state[x][y] = 1;
					curPos.x = x;
					curPos.y = y;
					curPos.dir = 1;					
					stackWord.push(curPos);	//�����һ��Ԫ��ѹջ
					return true;
				}

			}

			if (stackWord.empty())
			{
				break;
			}
			else
			{
				curPos = stackWord.top();
				curPos.dir++;
			}
					
		}

		if (bFind)
		{
			break;
		}
	}

	if (bFind)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}