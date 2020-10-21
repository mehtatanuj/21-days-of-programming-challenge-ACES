class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        
        int m=A.size();
        int n=A.size();
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        
        int max=INT_MIN;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(A[i-1]==B[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=0;
                }
                
                int a=dp[i][j];
                if(a>max)
                {
                    max=a;
                }
            }
        }
        return max;
    }
};
