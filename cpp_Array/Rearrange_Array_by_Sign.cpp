#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // TC = O(N) | SC = O(N)
    vector<int> rearrangeArray(vector<int>& nums) {
        // 1. Create our blank answer array (same size as nums)
        vector<int> ans(nums.size(), 0);
        
        // 2. Set up our two pointers
        // FIX: Added the missing semicolon here!
        int posIndex = 0; 
        int negIndex = 1;
        
        // 3. One Single Pass!
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                ans[posIndex] = nums[i];
                posIndex += 2; 
            }
            else{
                ans[negIndex] = nums[i];
                negIndex += 2; 
            }
        } 
        
        // 4. Return the new array we built
        // FIX: Returning 'ans' instead of 'nums'
        return ans;
    }
};
int main() {
    // Magic file routing
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
#endif

    // Read the array size from input.txt
    int n;
    cin >> n;
    vector<int> arr(n);
    
    // Read the array numbers from input.txt
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
 
    // ------------------------------------------
    // 3. TEST YOUR LOGIC HERE
    // ------------------------------------------
    Solution mySolution;             // Create your tool
   int answer=mySolution.findMaxConsecutiveOnes(arr);// Run your tool
    
    // Print the result to output.txt
cout << " " << answer<< "\n";
    return 0;
}