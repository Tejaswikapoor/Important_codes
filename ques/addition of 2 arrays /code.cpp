#include<iostream>
#include <vector>

using namespace std;
int main() {

vector <int> v1,v2,v3;
int n1,n2;
cin>>n1;
for(int i=0;i<n1;i++)
{
    int k;
    cin>>k;
    v1.push_back(k);
}
cin>>n2;
int w=0;
for(int i=0;i<n2;i++)
{
    int k;
    cin>>k;
    v2.push_back(k);
}
int carry=0;
for(int i=0;i<min(n1,n2);i++)
{
  int sum=v1.back()+v2.back()+carry;
  if(carry!=0)
  carry=0;
  if(sum>9)
  {
      int j=sum%10;
      //cout<<j;
      v3.push_back(j);
      w++;
      carry=sum/10;
  }
  else
  ///cout<<sum;
  v3.push_back(sum);
  w++;
  v1.pop_back();
  v2.pop_back();
  
}
//cout<<carry;
if(n1>n2)
{
    int j=n1-n2;
    for(int i=0;i<j;i++)
    {
        int d=v1.back()+carry;
        carry=0;
        if(d>9)
        {
            int g=d%10;
            v3.push_back(g);
            w++;
            //cout<<g;
            carry=d/10;
        }
        else{
           // cout<<d;
           v3.push_back(d);
           w++;
        }
        v1.pop_back();
    }
    
}

    if(carry>0)
    {v3.push_back(carry);
    w++;
    }
else if(n1<n2)
{
    int j=n2-n1;
    for(int i=0;i<j;i++)
    {
        int d=v2.back()+carry;
        carry=0;
        if(d>9)
        {
            int g=d%10;
            //cout<<g;
            v3.push_back(g);
            w++;
            carry=d/10;
        }
        else{
            //cout<<d;
            v3.push_back(d);
            w++;
        }
        v2.pop_back();
    }
    if(carry>0)
    {v3.push_back(carry);
    w++;
    }
}
//cout<<v3[0]<<endl;
for(int i=v3.size()-1;i>=0;i--)
{
//    cout<<v3.back()<<", ";
  cout<<v3[i]<<", ";
  //  v3.pop_back();
}
cout<<"END";
	return 0;
}
