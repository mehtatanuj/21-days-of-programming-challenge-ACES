class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        int A[n+1][sum+1];
        for(int i=0;i<=sum;i++)
        {
            A[0][i]=0;
        }
        for(int i=0;i<=n;i++)
        {
            A[i][0]=1;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    A[i][j]=(A[i-1][j-arr[i-1]])%1000000007 +(A[i-1][j])%1000000007;
                }
                else
                {
                    A[i][j]=(A[i-1][j])%1000000007;
                }
            }
        }
        return (A[n][sum])%1000000007;
	}
	  
};
