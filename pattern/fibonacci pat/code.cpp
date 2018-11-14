#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;
int a=0,b=1,v=1;
for(int i=0;i<n;i++)
{
    for(int j=0;j<=i;j++)
    {
        if(i==0)
        cout<<"0";
        else {
            if(a==0&&v==1)
            {cout<<"1"<<" ";
            v--;
           
            }
            else{
                        int s=a+b;
           
        cout<<s<<" ";
            
            
            a=b;
            b=s;
            }
            
        }
    }
    cout<<endl;
}
	return 0;
}
