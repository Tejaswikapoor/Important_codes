#include<iostream>
using namespace std;
int main()
{
int i,j;
int n;
cin>>n;
int  t=n;
for(i=n;i>=1;i--)
{
    for(int k=n;k>=i;k--)
    {
        cout<<k<<" ";
    }
    for(int o=0;o<i;o++)
    {
        if(o==i-1&&i==1)
        cout<<"  ";
        else
        cout<<"  ";
    
    }
for(j=1;j<=n;j++)
{
if(j<i)
cout<<"  ";
else
cout<<j<<" ";
}
cout<<endl;;
}
int u;
for( u=t;u>=0;u--)
cout<<u<<" ";
for(int j=1;j<=n;j++)
cout<<j<<" ";
cout<<endl;
for(int i=0;i<n;i++)
{
    for(int j=n;j>i;j--)
    cout<<j<<" ";
    for(int r=1;r<=(2*i)+1;r++)
    cout<<"  ";
    for(int j=1;j<=n;j++)
    {
        if(j>i)
        cout<<j<<" ";
    }
    
    cout<<endl;
}
return 0;
}
