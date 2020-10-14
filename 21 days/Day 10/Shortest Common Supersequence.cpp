#include<iostream>
using namespace std;


int check(string s,string s1,int m,int n)
{
    int dp[m+1][n+1];
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
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return m+n-dp[m][n];
}
int main()
 {
	int t;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s>>s1;
      cout<<check(s,s1,s.length(),s1.length())<<endl;
    }
	return 0;
}
