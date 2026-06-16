#include<iostream>
#include<vector>
using namespace std; 
class Solution {
public:
    // APPROACH 1: Hash Map
    // Time: O(N) | Space: O(N)
    // Best for: Speed when memory is available.
    vector<int> twoSumOptimal(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int partner = target - nums[i];
            if (mp.find(partner) != mp.end()) return {mp[partner], i};
            mp[nums[i]] = i;
        }
        return {};
    }

    // APPROACH 2: Sort + Two Pointers 
    // Time: O(N log N) | Space: O(1) 
    // Best for: Strict memory limits (returning Yes/No)
    string twoSumNoMemory(vector<int> nums, int target) {
        int left = 0;
        int right = nums.size() - 1; 
        sort(nums.begin(), nums.end());
        
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) return "yes";
            else if (sum < target) left++;
            else right--;
        }
        return "no";
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
   int answer=mySolution.findNumberAppearOnes(arr);// Run your tool
    
    // Print the result to output.txt
cout << " " << answer<< "\n";
    return 0;
}