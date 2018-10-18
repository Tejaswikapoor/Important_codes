#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];
        int maxsum=0,cursum[n];
        cursum[0]=a[0];
        for(int i=0;i<n;i++)
        {cin>>a[i];
        
            cursum[i]=cursum[i-1]+a[i];    
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {int crsum=0;
             
             crsum=cursum[j]-cursum[i-1];
                if(maxsum<crsum)
                maxsum=crsum;
            }
        }
        cout<<maxsum<<endl;
        t--;
    }
    
	return 0;
}
