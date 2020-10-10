#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int check(string s,string s1,int n,int m)
{
   
  if(n==0 || m==0)
  {
      return 0;
  }
  if(dp[n][m]!=-1)
  {
      return dp[n][m];
  }
  else
  {
      if(s[n-1]==s1[m-1])
      {
          return dp[n][m]= 1+check(s,s1,n-1,m-1);
      }
      else
      {
          return dp[n][m]=max(check(s,s1,n,m-1),check(s,s1,n-1,m));
      }
  }
}
int main()
 {
     
    int t;
    cin>>t;
    while(t--)
    {
         memset(dp,-1,sizeof(dp));
        int n,m;
        cin>>n>>m;
        string s,s1;
        cin>>s>>s1;
        cout<<check(s,s1,n,m)<<endl;
    }
    
	return 0;
}
