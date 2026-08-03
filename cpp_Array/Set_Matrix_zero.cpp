#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // TC = O(M * N) | SC = O(1)
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();       // Number of rows
        int m = matrix[0].size();    // Number of columns
        
        // This tiny variable acts as the notebook for the very first column
        int col0 = 1; 
        
        // 1. FIRST PASS: Scout the matrix for 0s
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                
                // If we find a zero...
                if (matrix[i][j] == 0) {
                    // Mark the i-th row notebook
                    matrix[i][0] = 0; 
                    
                    // Mark the j-th column notebook 
                    // (But if it's the 0th column, use our special variable!)
                    if (j == 0) {
                        col0 = 0;
                    } else {
                        matrix[0][j] = 0;
                    }
                }
            }
        }
        
        // 2. SECOND PASS: Execute zeroes on the INNER matrix (Ignore first row/col for now)
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                
                // If this cell's row-notebook OR col-notebook has a 0, destroy it!
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        // 3. THIRD PASS: Handle the first row and first column
        // Check the first row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }
        
        // Check the first column (Using our special variable!)
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1, 1},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {1, 1, 1, 1}
    };
    
    Solution mySolution;
    mySolution.setZeroes(matrix);
    
    // Print the modified matrix
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}