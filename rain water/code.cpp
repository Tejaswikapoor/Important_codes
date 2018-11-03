#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int left[n];
    int max=a[0];
    left[0]=max;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {left[i]=a[i];
        max=a[i];
        }
        else{
            left[i]=max;
        }
    }
    int right[n];
    int maxr=a[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>maxr)
        {
            maxr=a[i];
            right[i]=maxr;
        }
        else{
            right[i]=maxr;
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(min(left[i],right[i])-a[i]);
    }
    std::cout << sum << std::endl;
	return 0;
}
