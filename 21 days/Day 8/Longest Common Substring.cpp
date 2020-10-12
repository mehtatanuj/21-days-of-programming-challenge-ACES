#include<bits/stdc++.h>
using namespace std;
int dp[101][101];
int check(string s,string s1,int m,int n)
{
    for(int i=0;i<=m;i++)
    {
        dp[i][0]=0;
    }
    for(int i=0;i<=n;i++)
    {
        dp[0][i]=0;
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i-1]==s1[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    int maxi=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
               maxi=max(dp[i][j],maxi);         
        }
    }
    return maxi;
    
}
int main()
 {
     
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int m,n;
	    cin>>m>>n;
	    string s,s1;
	    cin>>s>>s1;
	    cout<<check(s,s1,m,n)<<endl;
	}
	return 0;
}
