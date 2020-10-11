#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int check(string s,string s1,int n,int m)
{
   
  for(int i=0;i<=n;i++)
  {
      dp[i][0]=0;
  }
   for(int i=0;i<=m;i++)
  {
      dp[0][i]=0;
  }
  
 
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=m;j++)
      {
          if(s[i-1]==s1[j-1])
          {
              dp[i][j]=1+dp[i-1][j-1];
          }
          else
          {
              dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
          }
      }
  }
  return dp[n][m];
  
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
