#include <bits/stdc++.h>

using namespace std;
void check(int A[],int B[],int m,int n)
{
	int dp[m+1][n+1];
	for(int i=0;i<=n;i++)
	{
			dp[0][i]=0;
	}
	for(int i=0;i<=m;i++)
	{
		dp[i][0]=0;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(A[i-1]<=j)
			{
				dp[i][j]=max(B[i-1]+dp[i-1][j-A[i-1]],dp[i-1][j]);
			}
			else
			{
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	int maxi=dp[m][n];
	int mini;
	for(int i=0;i<=n;i++)
	{
		if(dp[m][i]==maxi)
		{
			mini=i;
			break;
		}
	}
	cout<<mini<<" "<<maxi<<endl;
}
int main()
{
	while(1)
	{
		int n,m;
		cin>>n>>m;
		if(n!=0 || m!=0)
		{
		
		int A[m];
		int B[m];
		for(int i=0;i<m;i++)
		{
			cin>>A[i];
			cin>>B[i];
		}
			
			check(A,B,m,n);
		}
		else
		{
			break;
		}
	}
	
	
	return 0;
}
