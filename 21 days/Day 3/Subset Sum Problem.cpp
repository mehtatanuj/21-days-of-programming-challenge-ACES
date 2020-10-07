class Solution{
public:
    int equalPartition(int n, int arr[])
    {
        int sum=0;
        int sum1=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum%2)
        {
            return false;
        }
        else
        {
            sum1=sum/2;
            bool A[n+1][sum1+1];
            for(int i=0;i<=sum1;i++)
            {
                A[0][i]=false;
            }
            for(int i=0;i<=n;i++)
            {
                A[i][0]=true;
            }
            
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=sum1;j++)
                {
                    if(arr[i-1]<=j)
                    {
                        A[i][j]=A[i-1][j-arr[i-1]] || A[i-1][j];
                    }
                    else
                    {
                        A[i][j]=A[i-1][j];
                    }
                }
            }
             return A[n][sum1];
        }
       
    }
};
