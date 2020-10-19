class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.length();
        int m=str2.length();
        int A[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                {
                    A[i][j]=0;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(str1[i-1]==str2[j-1])
                {
                    A[i][j]=1+A[i-1][j-1];
                }
                else
                {
                    A[i][j]=max(A[i-1][j],A[i][j-1]);
                }
            }
            
        }
        int i=n,j=m;
        string s;
        while(i>0 &&j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                s.push_back(str1[i-1]);
                i--;
                j--;
            }
            else if(A[i-1][j]>A[i][j-1])
            {
                s.push_back(str1[i-1]);
                i--;
            }
            else
            {
                s.push_back(str2[j-1]);
                    j--;
            }
        }
        while(i>0)
        {
            s.push_back(str1[i-1]);
            i--;
        }
        while(j>0)
        {
            s.push_back(str2[j-1]);
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
