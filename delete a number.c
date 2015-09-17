#include <stdio.h>
#define MAX 100
void main()
{
 int i=0,j=0,m=0,n=0;
 int a[15];
 int count=15;
 for(i=0;i<15;i++)
  scanf("%d",&a[i]);
  for(i=0;i<count;i++)
  {
   if((a[i]==a[i+1])&&(a[i+1]==a[i+2]))
   {
    count=count-3;
    for(j=i;j<count;j++)
    {
     a[j]=a[j+3];
    }
    i--;
   }
  }
  //
  for(i=0;i<count;i++)
  {
   if((a[i]==a[i+1])&&(a[i+1]==a[i+2]))
   {
    count=count-3;
    for(j=i;j<count;j++)
    {
     a[j]=a[j+3];
    }
    i--;
   }
  }
    //
  for(i=0;i<count;i++)
  {
   if((a[i]==a[i+1])&&(a[i+1]==a[i+2]))
   {
    count=count-3;
    for(j=i;j<count;j++)
    {
     a[j]=a[j+3];
    }
    i--;
   }
  }
    //
  for(i=0;i<count;i++)
  {
   if((a[i]==a[i+1])&&(a[i+1]==a[i+2]))
   {
    count=count-3;
    for(j=i;j<count;j++)
    {
     a[j]=a[j+3];
    }
    i--;
   }
  }
    //
  for(i=0;i<count;i++)
  {
   if((a[i]==a[i+1])&&(a[i+1]==a[i+2]))
   {
    count=count-3;
    for(j=i;j<count;j++)
    {
     a[j]=a[j+3];
    }
    i--;
   }
  }
  for(i=0;i<count;i++)
   printf("%d ",a[i]);
 
}