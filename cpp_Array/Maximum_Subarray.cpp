#include<iostream>
#include<vector>
using namespace std; 
// Kadane's Algorithm.
class Solution {
public:
    // O(N) Time | O(1) Space 
    int MaximumSubarray(vector<int>& nums) {
        int maxi = INT_MIN;
        int currentsum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            // 1. Pick up the number
            currentsum = currentsum + nums[i];
            
            // 2. Record the score if it's our best yet
            if(currentsum > maxi){
                maxi = currentsum;
            }
            
            // 3. Drop the bag if we go into debt
            if(currentsum < 0){
                currentsum = 0;
            }
        }
        
        // Return safely INSIDE the function
        return maxi;
    }
};
    
int main() {
    // 1. Create a test array
    vector<int> arr = {1, 1, 3, 4, 4, 4, 2, 1};
    
    // 2. Create your tool (the Solution object)
    Solution mySolution;
    
    // 3. Run the tool and catch the returned number in a variable
    int answer = mySolution.MaximumSubarray(arr);
    
    // 4. Print the output to the screen!
    cout << "The answer is: " << answer << "\n";
    
    return 0;
}