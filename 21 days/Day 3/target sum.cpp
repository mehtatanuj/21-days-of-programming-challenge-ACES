class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
               int n= nums.size();

        if (S>1000) return 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int targetSumDouble = S+sum;
		
        if ((S+sum)%2) return 0; 
        int targetSum = (S+sum)/2;
        if (targetSum>sum) return 0; 
       int S1=(S+sum)/2;
        int A[n+1][S1+1];
        for(int i=0;i<=S1;i++)
        {
            A[0][i]=0;
        }
        for(int i=0;i<=n;i++)
        {
            A[i][0]=1;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=S1;j++) //////// number can be 0 so we will include j=0
            {
                if(nums[i-1]<=j)
                {
                    A[i][j]=A[i-1][j-nums[i-1]] + A[i-1][j];
                }
                else
                {
                    A[i][j]=A[i-1][j];
                }
            }
        }
        return A[n][S1];
    }
};
