#include<iostream>
#include <cstring>
using namespace std;
int main() {
  string s;
  cin>>s;
  int fr[26]={0};
  int l=s.length();
  for(int i=0;i<l;i++)
  {
    fr[s[i]-'a']++;
  }
  
  for(int i=0;i<l;i++)
  {
    // if(fr[i]>0)
    // {
    //   char c='a'+i;
    //   cout<<c<<fr[i];
    // }
    
    char c=s[i];
    int k=c-'a';
    if(fr[k]>0){
    cout<<s[i]<<fr[k];
    
        fr[k]=0;
    }
  }
  
	return 0;
}
