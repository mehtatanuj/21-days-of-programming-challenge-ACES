
// not accepted
int Solution::solve(string A) {
    string b;
    for(int i=A.length()-1;i>=0;i--)
    {
        b+=A[i];
    }
    int n=A.length();
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
            if(A[i-1]==b[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
   
}

