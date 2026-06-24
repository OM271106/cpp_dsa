#include<iostream>
#include<vector>
using namespace std; 
//Moore's Voting algorithm  
class Solution {
public:
    // O(N) Time | O(1) Space 
    int majorityElement(vector<int>& nums) {
        int element = 0;
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++){
            // We pull the number INSIDE the loop 
            // so it grabs the next number every single time 'i' goes up!
            int currentNumber = nums[i];
            
            if(count == 0){
                element = currentNumber;
                count++;
            }
            else if(currentNumber == element){
                count++;
            }
            else {
                count--;
            }
        }
        
        return element;
    
    // -------------------------------------------
        // PASS 2: Verify if it's ACTUALLY the majority
        // -------------------------------------------
        int trueCount = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == element){
                trueCount++;
            }
        }
        
        // Final Check
        if(trueCount > n / 2){
            return element;
        }
        
        return -1; // No majority element found
    }

};
    
int main() {
    // 1. Create a test array
    vector<int> arr = {1, 1, 3, 4, 4, 4, 2, 1};
    
    // 2. Create your tool (the Solution object)
    Solution mySolution;
    
    // 3. Run the tool and catch the returned number in a variable
    int answer = mySolution.majorityElement(arr);
    
    // 4. Print the output to the screen!
    cout << "The majority element is: " << answer << "\n";
    
    return 0;
}