#include<bits/stdc++.h>
using namespace std;
int check(string s,string y,int n)
{
	int A[n][n];
	for(int i=0;i<=n;i++)
	{
		A[0][i]=0;
		A[i][0]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((s[i-1]==y[j-1]) &&(i!=j))
			{
				A[i][j]=1+A[i-1][j-1];
			}
			else
			{
				A[i][j]=max(A[i-1][j],A[i][j-1]);
			}
		}
	}
	return A[n][n];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		string y=s;
		cout<<check(s,y,n)<<endl;
	}
	
	return 0;
}
