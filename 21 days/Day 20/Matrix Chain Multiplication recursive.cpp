
int solve(int p[],int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    int mint=10000;
    int count;
    for(int k=i;k<j;k++)
    {
        count=solve(p,i,k)+solve(p,k+1,j)+p[i-1]*p[k]*p[j];
        if(count<mint)
        {
            mint=count;
        }
    }
    return mint;
}
int mcm(int* p, int n){

	return solve(p,1,n);
  


}

