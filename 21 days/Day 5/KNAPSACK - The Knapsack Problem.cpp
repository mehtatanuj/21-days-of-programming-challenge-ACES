#include <bits/stdc++.h>
# define lli long long int
using namespace std;
int check(int val[],int wei[],int w,int n)
{
	int A[n+1][w+1];
	for(int i=0;i<=w;i++)
	{
		A[0][i]=0;
		
	}
	for(int i=0;i<=n;i++)
	{
		A[i][0]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(wei[i-1]<=j)
			{
				A[i][j]=max(val[i-1]+A[i-1][j-wei[i-1]],A[i-1][j]);
			}
			else
			{
				A[i][j]=A[i-1][j];
			}
		}
	}
	return A[n][w];
}
int main()
{
	int w,n;
	cin>>w>>n;
	int weight[n],value[n];
	for(int i=0;i<n;i++)
	{
		cin>>weight[i];
		cin>>value[i];	
	}
	cout<<check(value,weight,w,n);
	
	
	
	return 0;
}
