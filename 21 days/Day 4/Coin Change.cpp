class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       
        long long int  A[m+1][n+1];
        for(int i=0;i<=n;i++)
        {
            A[0][i]=0;
        }
        for(int i=0;i<=m;i++)
        {
            A[i][0]=1;
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(S[i-1]<=j)
                {
                    A[i][j]=A[i][j-S[i-1]]+A[i-1][j];
                }
                else
                {
                    A[i][j]=A[i-1][j];
                }
            }
        }
        return A[m][n];
    }
};
