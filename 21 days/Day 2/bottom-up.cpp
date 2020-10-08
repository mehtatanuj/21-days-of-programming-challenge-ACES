#include<iostream>
using namespace std;
int knap(int A[],int B[],int n,int w)
{
    int ans[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        ans[i][0]=0;
    }
    for(int i=0;i<=w;i++)
    {
        ans[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=w;j++)
        {
            if(B[i-1]<=j)
            {
            ans[i][j]=max(A[i-1]+ans[i-1][j-B[i-1]],ans[i-1][j]);
            }
            else
            {
                ans[i][j]=ans[i-1][j];
            }
        }
        
    }
    return ans[n][w];
    
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,w;
	    cin>>n;
	    cin>>w;
	    int A[n];
	    int B[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>B[i];
	    }
	    cout<<knap(A,B,n,w)<<endl;
	}
	return 0;
}
// https://medium.com/algorithm-and-datastructure/0-1-knapsack-in-the-bottom-up-approach-cd95adc6791e
