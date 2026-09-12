class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        bool firstCol = false;

        // STEP 1: Store information
        for (int i = 0; i < row; i++) {

            // Remember if first column originally had 0
            if (matrix[i][0] == 0)
                firstCol = true;

            // Start from column 1 because column 0 is our marker
            for (int j = 1; j < col; j++) {

                if (matrix[i][j] == 0) {

                    // Mark this row
                    matrix[i][0] = 0;

                    // Mark this column
                    matrix[0][j] = 0;
                }
            }
        }

        // STEP 2: Use markers
        for (int i = 1; i < row; i++) {

            for (int j = 1; j < col; j++) {

                if (matrix[i][0] == 0 ||
                    matrix[0][j] == 0) {

                    matrix[i][j] = 0;
                }
            }
        }

        // STEP 3: Zero first row
        if (matrix[0][0] == 0) {

            for (int j = 0; j < col; j++)
                matrix[0][j] = 0;
        }

        // STEP 4: Zero first column
        if (firstCol) {

            for (int i = 0; i < row; i++)
                matrix[i][0] = 0;
        }
    }
};