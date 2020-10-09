// this is not a correct solution  
#include <bits/stdc++.h>
# define lli long long int
using namespace std;
long long int  t[10000000][10000000];
int knapsack(lli weight[],lli val[],lli w,lli n)
{
	
	if(n==0 || w==0)
	return 0;
	if(t[n][w]!=-1)
	{
		return t[n][w];
	}
	if(weight[n-1]<=w)
	return t[n][w]=max(val[n-1]+knapsack(weight,val,w-weight[n-1],n-1),knapsack(weight,val,w,n-1));
	else
	return t[n][w]=knapsack(weight,val,w,n-1);
}
int main()
{
		lli k,n;
	cin>>k>>n;
	lli weight[n],val[n];
	for(lli i=0;i<n;i++)
	{
		cin>>val[i];
		cin>>weight[i];
		
	}
	cout<<knapsack(weight,val,k,n)<<endl;
	
		
	return 0;
}

