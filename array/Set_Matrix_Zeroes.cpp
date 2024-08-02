class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool zerothRow=false;//if it recieves 0 even once in the whole zerothRow it'll be 0.
        bool zerothCol=false;//if it recieves 0 even once in the cwhole Zeroth Column it'll make it 0.
        for(int j=0;j<n;j++)
        {
            if(matrix[0][j]==0)
            {
                zerothRow=true;
                break;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(matrix[j][0]==0)
            {
                zerothCol=true;
                break;
            }
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;//row vector
                    matrix[0][j]=0;//column vector
                }
            }
        }
            for(int j=1;j<n;j++)//col vector
            {
                if(matrix[0][j]==0)
                {
                  for(int i=1;i<m;i++)
                  {
                      matrix[i][j]=0;
                  }
                }
            }
            for(int j=1;j<m;j++)//row vector
            {
                if(matrix[j][0]==0)
                {
                  for(int i=1;i<n;i++)
                  {
                      matrix[j][i]=0;
                  }
                }
            }
            //zeroth row
            if(zerothRow==true)
            {
                for(int j=0;j<n;j++)
                {
                    matrix[0][j]=0;
                }
            }
            //zerothCol
            if(zerothCol==true)
            {
                for(int i=0;i<m;i++)
                {
                    matrix[i][0]=0;
                }
            }
        
         }
}; 
