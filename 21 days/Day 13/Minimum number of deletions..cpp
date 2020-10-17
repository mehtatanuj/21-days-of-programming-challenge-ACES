#include<iostream>
using namespace std;
int check(string s,string y,int n)
{
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i-1]==y[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return n-dp[n][n];
    
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s,y;
	    cin>>s;
	    for(int i=s.length()-1;i>=0;i--)
	    {
	        y+=s[i];
	    }
	    cout<<check(s,y,n)<<endl;
	}
	return 0;
}
