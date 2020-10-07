#include<bits/stdc++.h>
//#define REP(1,n) for(int i=1;i<=n;i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>a
#define vii vector<ii>
//#define lli long long int
#define inf 1000000000
using namespace std;
int knapsack(int weight[],int val[],int w,int n)
{
	if(n==0 || w==0)
	return 0;
	if(weight[n-1]<=w)
	return max(val[n-1]+knapsack(weight,val,w-weight[n-1],n-1),knapsack(weight,val,w,n-1));
	else
	return knapsack(weight,val,w,n-1);
}
int main()
{
	int val[5]={1,2,4,6,8};
	int weight[5]={1,2,3,4,7}; 
	int w=7;
	int n=5;
	cout<<knapsack(weight,val,w,n);
	
		
	return 0;
}
