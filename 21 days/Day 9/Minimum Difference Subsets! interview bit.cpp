int Solution::solve(vector<int> &A) {
    int sum=0;
    for(int i=0;i<A.size();i++)
    {
        sum+=A[i];
    }
   int n=A.size();
   bool dp[n+1][sum+1];
   for(int i=0;i<=n;i++)
   {
       dp[i][0]=true;
       
   }
   for(int i=1;i<=sum;i++)
   {
       dp[0][i]=false;
   }
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=sum;j++)
       {
           if(A[i-1]<=j)
           {
               dp[i][j]=dp[i-1][j-A[i-1]] || dp[i-1][j];
           }
           else
           {
               dp[i][j]=dp[i-1][j];
           }
       }
   }
   int mint=INT_MAX;
   for(int i=0;i<=sum/2;i++)
   {
       if(dp[n][i]==true)
       {
           mint=min(abs(2*i-sum),mint);
       }
       
   }
   return mint;
   
}

