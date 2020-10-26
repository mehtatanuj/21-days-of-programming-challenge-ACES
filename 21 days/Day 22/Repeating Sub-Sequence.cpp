int Solution::anytwo(string A) {
    string s=A;
    int n=A.length();
    
    int dp[n+1][n+1];
   
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=false;
        dp[0][i]=false;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
         if(i!=j)
         {
             if(A[i-1]==s[j-1])
             {
                 dp[i][j]=dp[i-1][j-1] +1;
             }
             else
             {
                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
             }
         }
         else
         {
             dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
         }
        }
        
    }
    if(dp[n][n]>1)
    return 1;
    return 0;
}

