#include<iostream>
#include<cstring>
using namespace std;
struct node
{
    int b;
    int c;
    int num;
}arry[5];
char a[25][25];
int keynum[5];
int have[5];
int bz;//宝藏找到的标志
void jc();
void dfs(int x,int y)
{
    if(a[x][y]!='X')//没碰到墙
    {
        if(a[x][y]>='a'&&a[x][y]<='e')//记录钥匙数量
        {keynum[a[x][y]-'a']++;}
        else
        {
        if(a[x][y]>='A'&&a[x][y]<='E') //碰到门了
          {
            arry[a[x][y]-'A'].b=x;//记录门的坐标
            arry[a[x][y]-'A'].c=y;
            arry[a[x][y]-'A'].num++;
            return;
          }
        else
          {if(a[x][y]=='G')//碰到宝藏
            {bz=1;return;}
          }
        }
        a[x][y]='X';
        dfs(x-1,y);
        dfs(x+1,y);
        dfs(x,y-1);
        dfs(x,y+1);
        jc();
    }
}
void jc()
{
    for(int i=0;i<5;i++)
    {
        if(arry[i].num)
        {
            if(have[i]==keynum[i])
            {
                a[arry[i].b][arry[i].c]='X';
                dfs(arry[i].b+1,arry[i].c);
                dfs(arry[i].b-1,arry[i].c);
                dfs(arry[i].b,arry[i].c+1);
                dfs(arry[i].b,arry[i].c-1);
            }
        }
    }
}
int main()
{
    int q,w,m,n,i,j;

   while((cin>>q>>w)&&(q||w))
    {
        memset(a,'X',sizeof(a));//划分范围边界
        memset(have,0,sizeof(have));
        memset(keynum,0,sizeof(keynum));
        memset(arry,0,sizeof(arry));
        bz=0;
        for(i=1;i<=q;i++)
        for(j=1;j<=w;j++)
         {
           cin >>a[i][j];
           if(a[i][j]>='a'&&a[i][j]<='e')
           have[a[i][j]-'a']++;
           else if(a[i][j]=='S')//记录起点
           m=i,n=j;
         }
       dfs(m,n);
       if(bz)
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
    }
    return 0;
}