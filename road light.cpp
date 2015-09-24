#include<stdio.h>
#include<stdlib.h>

#define MAX 101

int main(void)
{
	int i;
	int k;
	int m;
	int total = 0;
	int road_length;//马路长度
	int n;//存在的区域数
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
				//判断是否有重叠部分，有的话重新取边界，并且将“小”的部分却除 
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
					total+=length[i]+1;//包括2端点吧
				}
			}
			printf("%d",road_length-total+1);
	}
    return 0;
 }