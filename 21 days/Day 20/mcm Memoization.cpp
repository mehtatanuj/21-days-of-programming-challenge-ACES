int A[101][101];
int solve(int p[],int i,int j)
{
    
    if(i>=j)
    {
        return 0;
    }
    if(A[i][j]!=-1)
    {
        return A[i][j];
    }
    
    int mint=1000000;
    int count;
    for(int k=i;k<j;k++)
    {
        count=solve(p,i,k)+solve(p,k+1,j)+p[i-1]*p[k]*p[j];
        if(count<mint)
        {
            mint=count;
        }
    }
    A[i][j] =mint;
}
int mcm(int* p, int n){

    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            A[i][j]=-1;
        }
    }
	return solve(p,1,n);
  


}

