#include <bits/stdc++.h>

using namespace std;
int dp[101][101];

void check(int A[],int B[],int n,int m)
{
    vector<int>v;
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
            if(A[i-1]==B[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int i=n;
    int j=m;
    while(i>0 && j>0)
    {
        if(A[i-1]==B[j-1])
        {
             v.push_back(A[i-1]);
            i--;
            j--;
           
        }
        else
        {
            
            if(dp[i-1][j]>dp[i][j-1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
int n,m;
cin>>n>>m;
int A[n];
int B[m];
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
for(int i=0;i<m;i++)
{
    cin>>B[i];
}
check(A,B,n,m);

    return 0;
}
