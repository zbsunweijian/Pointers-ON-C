#include<stdio.h>
#include<stdlib.h>

#define MAX 101

int main(void)
{
	int i;
	int k;
	int m;
	int total = 0;
	int road_length;//��·����
	int n;//���ڵ�������
	int begin[MAX],over[MAX],length[MAX];

	scanf("%d %d",&road_length,&n);
	if((road_length>=1&&road_length<=10000)&&(n>=1&&n<=100))
	{
		for(i=0;i<n;i++)
			scanf("%d %d",&begin[i],&over[i]);
		length[i]=(over[i]-begin[i]);
		for(m=0;m<n-1;m++)
			for(k=m+1;k<n;k++)
			{
				//�ж��Ƿ����ص����֣��еĻ�����ȡ�߽磬���ҽ���С���Ĳ���ȴ�� 
				if((begin[m]<=over[k])&&(over[m]>=begin[k]))
				{
					over[m]=((over[m]>over[k])?over[m]:over[k]);
					begin[m]=((begin[m]<begin[k])?begin[m]:begin[k]);	//
					begin[k]=over[k]= 0;
				}							
			}
			total = 0;
			for(i=0;i<n;i++)
			{
				if (begin[i] != over[i] )
				{
					length[i]=(over[i]-begin[i]);
					total+=length[i]+1;//����2�˵��
				}
			}
			printf("%d",road_length-total+1);
	}
    return 0;
 }