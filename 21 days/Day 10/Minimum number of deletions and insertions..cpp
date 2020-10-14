class Solution{
		

	public:
	int minOperations(string s, string s1) 
	{ 
	   int m=s.length();
	   int n=s1.length();
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
	  return m+n-(2*dp[m][n]); 
	} 
};
