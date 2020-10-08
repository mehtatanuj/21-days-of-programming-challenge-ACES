#include<iostream>
using namespace std;
int check(int val[],int wei[],int n)
{
    int A[n+1][n+1];
    for(int i=0;i<=n;i++)
    {
        A[0][i]=0;
        A[i][0]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(wei[i-1]<=j)
            {
                A[i][j]=max(val[i-1]+A[i][j-wei[i-1]],A[i-1][j]);
            }
            else
            {
                A[i][j]=A[i-1][j];
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
	    int wei[n];
	    int val[n];
	    for(int i=1;i<=n;i++)
	    {
	        wei[i-1]=i;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>val[i];
	    }
        cout<<check(val,wei,n)<<endl;
	}
	return 0;
}
