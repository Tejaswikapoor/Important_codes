#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int k=n-1;
    for(int i=0;i<n;i++)
    {
        for(int s=k;s>0;s-- )
        cout<<" ";
        k--;
        for(int j=0;j<n;j++)
        {
            if(i==0||i==n-1)
            cout<<"*";
            else{
                if(j==0||j==n-1)
                cout<<"*";
                else
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
	return 0;
}
