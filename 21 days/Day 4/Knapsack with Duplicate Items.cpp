class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        int A[N+1][W+1];
        for(int i=0;i<=N;i++)
        {
            A[i][0]=0;
        }
        for(int i=0;i<=W;i++)
        {
            A[0][i]=0;
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=W;j++)
            {
                if(wt[i-1]<=j)
                {
                    A[i][j]=max(val[i-1]+A[i][j-wt[i-1]],A[i-1][j]);
                }
                else
                {
                    A[i][j]=A[i-1][j];
                }
            }
        }
        return A[N][W];
    }
};
