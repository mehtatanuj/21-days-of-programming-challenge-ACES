class Solution{

	public:
	int minDiffernce(int arr[], int n) 
	{ 
	   int sum=0;
	   for(int i=0;i<n;i++)
	   {
	       sum+=arr[i];
	   }
	   bool A[n+1][sum+1];
	   for(int i=0;i<=sum;i++)
	   {
	       A[0][i]=false;
	   }
	   for(int i=0;i<=n;i++)
	   {
	       A[i][0]=true;
	   }
	   for(int i=1;i<=n;i++)
	   {
	       for(int j=1;j<=sum;j++)
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
	   //s1-s2=min;
	   //s1+s2=sum;
	   //2s1=sum+min
	   int mint=INT_MAX;
	   for(int i=0;i<=(sum)/2;i++)
	   {
	       if(A[n][i])
	       mint=min(abs(2*i-sum),mint);
	   }
	   return mint;
