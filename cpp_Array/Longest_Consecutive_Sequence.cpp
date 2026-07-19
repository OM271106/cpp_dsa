#include <vector>
#include <unordered_set>
#include <algorithm> // for max()
using namespace std;

class Solution {
public:
    // TC = O(N) | SC = O(N)
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        int longestStreak = 1;
        
        // Create our Hash Set (The magical bag!)
        unordered_set<int> st;
        
        // STEP 1: Loop through the 'nums' array and insert every number into 'st'
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        
        // STEP 2: Loop through the numbers again
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            
            // STEP 3: Is this number the START of a sequence? 
            // FIX 1: Changed 'nums' to 'num'
            if (st.count(num - 1) == 0) {
                
                // STEP 4: Since we found a start, begin counting!
                int currentNum = num;
                int currentStreak = 1;
                
                // STEP 5: While 'currentNum + 1' DOES exist in the set...
                while (st.count(currentNum + 1) == 1) {
                    // ... add 1 to currentNum and add 1 to currentStreak!
                    currentNum = currentNum + 1;
                    currentStreak = currentStreak + 1;
                }
                
                // STEP 6: Did this streak beat our longestStreak?
                longestStreak = max(longestStreak, currentStreak);
                
            } // The 'if' statement safely closes here!
        } // The 'for' loop safely closes here!
        
        // FIX: Return the final answer OUTSIDE the loop!
        return longestStreak;
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
   int answer=mySolution.LongestSequence(arr);// Run your tool
    
    // Print the result to output.txt
cout << " " << answer<< "\n";
    return 0;
}