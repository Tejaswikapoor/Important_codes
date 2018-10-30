#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;
int p=n;
int f=n;
int a=n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<i;j++)
    {
        cout<<"  ";
    }
    for(int k=p;k>0;k--)
    cout<<k<<" ";
 cout<<"0 ";
 for(int d=1;d<=f;d++)
 cout<<d<<" ";
 f--;

 
 cout<<endl;
    p--;
}

    for(int i=0;i<n;i++)
    cout<<"  ";
    cout<<"0 "<<endl;;
for(int i=1;i<=n;i++)
{
 for(int l=a-1;l>0;l--)
 {cout<<"  ";

 }
//  if(a==n)
//  cout<<"0"<<endl;;
 a--;

    for(int j=i;j>0;j--)
    {
        cout<<j<<" ";
    }
    cout<<"0 ";
    for(int j=1;j<=i;j++)
    cout<<j<<" ";
    
    cout<<endl;
}
	return 0;
}
