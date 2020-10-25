int Solution::solve(string A) {
    string y;
    for(int  i=A.length()-1;i>=0;i--)
    {
        y+=A[i];
    }
    int n=A.length();
    int Ar[n+1][n+1];
    for(int i=0;i<n;i++)
    {
        Ar[0][i]=0;
        Ar[i][0]=0;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(A[i-1]==y[j-1])
            {
                Ar[i][j]=1+Ar[i-1][j-1];
            }
            else
            {
                Ar[i][j]=max(Ar[i-1][j],Ar[i][j-1]);
            }
        }
    }
    return Ar[n][n];
}

