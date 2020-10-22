class Solution {
public:
    int minInsertions(string s) {
        string y;
        for(int i=s.length()-1;i>=0;i--)
        {
            y+=s[i];
        }
        int n=s.length();
        int A[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            A[i][0]=0;
            A[0][i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==y[j-1])
                {
                    A[i][j]=1+A[i-1][j-1];
                }
                else
                {
                    A[i][j]=max(A[i-1][j],A[i][j-1]);
                }
            }
        }
        return s.length()-A[n][n];
    }
};
