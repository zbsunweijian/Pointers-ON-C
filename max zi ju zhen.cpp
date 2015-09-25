 #include <iostream>   
 using namespace std;   
   
int ** a;   
int **sum; 
 
 int max_array(int *a,int n)   
{   
         int *c = new int [n];   
        int i =0;   
        c[0] = a[0];   
         for(i=1;i<n;i++)   
         {   
                if(c[i-1]<0)   
                        c[i] = a[i];   
               else  
                        c[i] = c[i-1]+a[i];   
        }   
       int max_sum = -65536;   
         for(i=0;i<n;i++)   
                if(c[i]>max_sum)   
                         max_sum = c[i];   
         delete []c;   
         return max_sum;   
    
 }  

 int max_matrix(int n)   
 {   
        int i =0;   
         int j = 0;   
         int max_sum = -65535;   
         int * b = new int [n];   
    
         for(i=0;i<n;i++)   
         {   
                 for(j=0;j<n;j++)   
                         b[j]= 0;   
                 for(j=i;j<n;j++)
//������ӵ�i�е���j���������������b�У��ڼ�ʱ���Ե����ϣ����ȼ����м��(j-i)����1�������
//Ȼ�����j-i���� 2�������һ������,��С����Ļ�����һ���ۼӣ������ظ�����   
                {   
                        for(int k =0;k<=n;k++)   
                                 b[k] += a[j][k];   
                         int sum = max_array(b,n);   
                        if(sum > max_sum)   
                                 max_sum = sum;   
                 }   
         }   
         delete []b;   
         return max_sum;   
 }  

 int main()   
 {   
         int n;   
        cin >> n;   
    
         a = new int *[n];   
         sum = new int *[n];   
        int i =0;   
        int j =0;   
         for(i=0;i<n;i++)   
         {   
                 sum[i] = new int[n];   
                 a[i] = new int[n];   
                for(j=0;j<n;j++)   
                {   
                        cin>>a[i][j];   
                        sum[i][j] =0 ;
                           //sum[r][k]��ʾ��ʼ�ͽ�β������ֱ�Ϊr,kʱ������Ӿ���   
                        //sum[r][k] = max{sum (a[i][j]):r<=i<=k}:0<=k<=n-1   
                }   
         }   
         /*  
        int b[10]={31,-41,59,26,-53,58,97,-93,-23,84};  
         cout << max_array(b,10) << endl;  
        */  
        cout << max_matrix(n);   
 }