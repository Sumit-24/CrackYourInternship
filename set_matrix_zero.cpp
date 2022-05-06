class Solution {
    void helper(vector<vector<int>> &mat, vector<vector<int>> &v,int i, int j)
    {
        int m = mat.size(), n = mat[0].size();
        int r = i,c=j;
        while(r>=0)
        {
            if(mat[r][c]!=0 and !v[r][c])
            {
                mat[r][c]=0;
                v[r][c]=1;
            }
            r--;
        }
        r = i;
        while(c>=0)
        {
            if(mat[r][c]!=0 and !v[r][c])
            {
                mat[r][c]=0;
                v[r][c]=1;
            }
            c--;
        }
        c=j;
        while(r<m)
        {
            if(mat[r][c]!=0 and !v[r][c])
            {
                mat[r][c]=0;
                v[r][c]=1;
            }
            r++;
        }
        r = i;
        while(c<n)
        {
            if(mat[r][c]!=0 and !v[r][c])
            {
                mat[r][c]=0;
                v[r][c]=1;
            }
            c++;
        }
    }
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> v(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==0 and mat[i][j]==0)
                {
                    v[i][j] = 1;
                    helper(mat,v,i,j);
                }
            }
        }
    }
};
