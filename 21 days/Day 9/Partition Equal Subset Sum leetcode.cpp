class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int n=nums.size();
        if(sum%2)
        {
            return 0;
        }
        sum=sum/2;
        bool A[n+1][sum+1];
        for(int i=0;i<=n;i++)
        {
            A[i][0]=true;
        }
        for(int i=1;i<=sum;i++)
        {
            A[0][i]=false;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(nums[i-1]<=j)
                {
                    A[i][j]=A[i-1][j-nums[i-1]] || A[i-1][j];         
                }
                else
                {
                    A[i][j]=A[i-1][j];
                }
            }
        }
        return A[n][sum];
    }
};
