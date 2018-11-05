#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int t;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k=0;
    int target;
    
    cin>>target;
   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
      {
          int sum;
          sum=a[i]+a[j];
          if(sum==target)
          {
              if(a[i]>a[j])
              cout<<a[j]<<" and "<<a[i]<<endl;
              else
              cout<<a[i]<<" and "<<a[j]<<endl;
              
          }
          else
          continue;
          
      }
   }
	return 0;
}
