#include <bits/stdc++.h>

using namespace std;
int check(int A[],int n,int m)
{
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }
    for(int i=0;i<=m;i++)
    {
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(A[i-1]<=j)
            {
                dp[i][j]=max(A[i-1]+dp[i][j-A[i-1]],dp[i-1][j]);
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][m];
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<check(A,n,m)<<endl;
}



    return 0;
}
