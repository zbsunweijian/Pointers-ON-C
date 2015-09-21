#include<iostream>  
#include<cstdio>  
#include<cstring>  
using namespace std;  
  
//Floyed�㷨����������֮������·�����㷨���Ӷ�O��n^3����ȻFloyed�㷨�������·�������㷨���Ӷ������㷨����д���򵥣����ڴ˴�����������֮������·����  
const int inf = 0x3f3f3f3f;//�����  
struct Graph  
{  
    char vertex[35][4];  
    int edges[35][35];  
    int visited[35];  
};  
char s1[21][4]={"A1","A2","A3","A4","A5","A6","A7","A8","A9","T1",  
    "A10","A11","A12","A13","T2","A14","A15","A16","A17","A18","A1"};  
char s2[17][4]={"B1","B2","B3","B4","B5","T1","B6","B7","B8","B9",  
    "B10","T2","B11","B12","B13","B14","B15"};  
char v[35][4]={"A1","A2","A3","A4","A5","A6","A7","A8","A9","T1",  
    "A10","A11","A12","A13","T2","A14","A15","A16","A17","A18",  
    "B1","B2","B3","B4","B5","B6","B7","B8","B9","B10","B11",  
    "B12","B13","B14","B15"};  
  
//�ؼ�������ν�ͼ  
void CreateGraph(Graph * &G)  
{  
    int i, j, k;  
    for (i = 0; i < 35; i++)  
    {  
        memcpy(G->vertex[i],v[i],sizeof(v[i]));  
        G->visited[i] = 0;  
    }  
    for (i = 0; i < 35; i++)  
    {  
        for (j = 0; j < 35; j++)  
        {  
            G->edges[i][j] = inf;  
        }  
    }  
    for (k = 0; k < 20; k++)  
    {  
        for (i = 0;strcmp(s1[k],G->vertex[i])!=0; i++);  
        for (j = 0;strcmp(s1[k+1],G->vertex[j])!=0;j++);  
        G->edges[i][j] = 1;  
        G->edges[j][i] = 1;  
    }  
    for (k = 0; k < 16; k++)  
    {  
        for (i = 0;strcmp(s2[k],G->vertex[i])!=0; i++);  
        for (j = 0; strcmp(s2[k+1],G->vertex[j])!=0; j++);  
        G->edges[i][j] = 1;  
        G->edges[j][i] = 1;  
    }  
}  
//Floyed�㷨����������֮������·��  
void Floyed(Graph * &G)  
{  
    int i,j,k;  
    for (k = 0; k < 35; k++)  
    {  
        for (i = 0; i < 35; i++)  
        {  
            for (j = 0; j < 35; j++)  
            {  
                if (G->edges[i][k] + G->edges[k][j] < G->edges[i][j])  
                {  
                    G->edges[i][j] = G->edges[i][k] + G->edges[k][j];  
                }  
            }  
        }  
    }  
}  
  
void ace(Graph *G)  
{  
    char s1[4],s2[4];  
    int i,j;  
    cout<<"���������վ���յ�վ"<<endl;  
    cin>>s1>>s2;  
    for (i = 0;strcmp(s1,G->vertex[i])!=0;i++);  
    for (j = 0;strcmp(s2,G->vertex[j])!=0;j++);  
    cout<<G->edges[i][j]+1<<endl;  
}  
int main()  
{  
    Graph *G = new Graph;  
    CreateGraph(G);  
    Floyed(G);  
    while(1)  
    {  
        ace(G);  
    }  
    system("pause");  
    return 0;  
}  