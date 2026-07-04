class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int rowStart = 0;
        int colStart = 0;
        int rowEnd = matrix.size();
        int colEnd = matrix[0].size();
        int total = matrix.size()*matrix[0].size();


        int row=0;
        int col=0;

        while(true){
            
            while(col<colEnd){
                ans.push_back(matrix[row][col]);
                if(ans.size()==total){
                    return ans;
                }
                col++;
            }
            col--;
            colEnd--;
            row++;
            while(row<rowEnd){
                ans.push_back(matrix[row][col]);
                if(ans.size()==total){
                    return ans;
                }
                row++;
            }
            row--;
            rowEnd--;
            col--;
            while(col>=colStart){
                ans.push_back(matrix[row][col]);
                if(ans.size()==total){
                    return ans;
                }
                col--;
            }
            col++;
            colStart++;
            row--;
            while(row>rowStart){
                ans.push_back(matrix[row][col]);
                if(ans.size()==total){
                    return ans;
                }
                row--;
                
            }
            row++;
            rowStart++;
            col++;
        }
    }
};