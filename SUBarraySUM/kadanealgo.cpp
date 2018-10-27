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
       // cursum[0]=a[0];
        for(int i=0;i<n;i++)
        {cin>>a[i];
        
         //   cursum[i]=cursum[i-1]+a[i];    
        }
        int cs=0;
        int ms=0;
        for(int i=0;i<n;i++)
        {
           cs=cs+a[i];
           if(cs<0)
           cs=0;
           ms=max(ms,cs);
           
        }
        cout<<ms<<endl;
        t--;
    }
    
	return 0;
}
