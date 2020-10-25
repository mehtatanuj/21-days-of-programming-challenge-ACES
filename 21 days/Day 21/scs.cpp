class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
        
        int  n = s1.length(), m = s2.length();
        int A[n+1][m+1];
        for(int i =0; i<n+1; i++)
            A[i][0] = 0;
        for(int i =0; i<m+1; i++)
            A[0][i] = 0;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m;j++)
            {
                if(s1[i-1] == s2[j-1]) 
                    A[i][j] = 1 + A[i-1][j-1];
                else 
                    A[i][j] = max(A[i][j-1], A[i-1][j]);    
            }
        }

        int i = n, j = m;
        string count;
        while((i >0) && (j > 0))
        {
            if(s1[i-1] == s2[j-1])
            {
                count = s1[i-1] + count;
                i--, j--;
            }
            else
            {
                if(A[i][j-1] == A[i][j]){
                    count = s2[j-1] + count;
                    j--;
                }
                    
                else{
                    count = s1[i-1] + count;
                    i--;
                }
                    
            }
        }
        while(i > 0)
        {
            count = s1[i-1] + count;
            i--;
        }
        while(j > 0)
        {
            count = s2[j-1] + count;
            j--;
        }


        return count;        
    }
    
    

};
