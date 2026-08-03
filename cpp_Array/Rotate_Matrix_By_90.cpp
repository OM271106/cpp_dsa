#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // --------------------------------------------------------
    // TC = O(N^2) | SC = O(1)
    // --------------------------------------------------------
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // Step-1 Transpose the Rows into Columns
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
        // Use Built Swap Function
        swap(matrix[i][j],matrix[j][i]);
            }
        } 
        // step - 2.Reverse Every Row
        for(int i=0;i<n;i++){
            // Use Built in Reverse STL 
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};