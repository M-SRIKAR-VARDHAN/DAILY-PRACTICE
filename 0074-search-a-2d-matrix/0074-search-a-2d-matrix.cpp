class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int x = matrix.size();
        int y = 0;

        
        for (int i = 0; i < x; i++) {
            if (matrix[i][0] > target) {
                y = i - 1; 
                break;
            }
            y = i; 
        }

        
        if (y < 0) return false;  

        
        for (int i = 0; i < matrix[y].size(); i++) {  
            if (matrix[y][i] == target) {
                return true;
            }
        }

        return false;
    }
};
