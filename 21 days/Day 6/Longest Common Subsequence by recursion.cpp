#include<iostream>
using namespace std;
int check(string s,string s1,int n,int m)
{
  if(n==0 || m==0)
  {
      return 0;
  }
  else
  {
      if(s[n-1]==s1[m-1])
      {
          return 1+check(s,s1,n-1,m-1);
      }
      else
      {
          return max(check(s,s1,n,m-1),check(s,s1,n-1,m));
      }
  }
}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s,s1;
        cin>>s>>s1;
        cout<<check(s,s1,n,m)<<endl;
    }
    
	return 0;
}
