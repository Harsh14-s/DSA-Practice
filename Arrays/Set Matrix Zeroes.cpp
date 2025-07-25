class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool col0 = false;

        // Step 1: Mark first row and column
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) col0 = true;

            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 2: Update matrix based on markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
        }

        // Step 3: Handle first row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < n; j++)
                matrix[0][j] = 0;
        }

        // Step 4: Handle first column
        if (col0) {
            for (int i = 0; i < m; i++)
                matrix[i][0] = 0;
        }
    }
};
