
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int A[M+1][V+1];
	    for(int i=0;i<=V;i++)
	    {
	        A[0][i]=INT_MAX-1;
	    }
	    for(int i=0;i<=M;i++)
	    {
	        A[i][0]=0;
	    }
	  
	    for(int i=1;i<=M;i++)
	    {
	        for(int j=1;j<=V;j++)
	        {
	            if(coins[i-1]<=j)
	            {
	                A[i][j]=min(1+A[i][j-coins[i-1]],A[i-1][j]);
	            }
	            else
	            {
	                A[i][j]=A[i-1][j];
	            }

	        }
	    }
	    if(A[M][V]!=INT_MAX-1)
	    return A[M][V];
	    else
	    {
	        return -1;
	    }
	} 
	  
};
