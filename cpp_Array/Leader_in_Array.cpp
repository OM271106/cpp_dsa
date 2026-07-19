#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // TC = O(N) | SC = O(1)
    vector<int> LeaderInArray(vector<int>& nums) {
       vector<int> ans;
        int n =nums.size();
        int maxSeenSofar=nums[n-1];
         ans.push_back(maxSeenSofar);
        for(int i=n-2;i>=0;i--){
           // check if the current number is smaller than the one to its right
            if(nums[i] > maxSeenSofar){
                ans.push_back(nums[i]);
                maxSeenSofar=nums[i];
            }
        }
        reverse(ans.begin(), ans.end());
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
   int answer=mySolution.LeaderInArray(arr);// Run your tool
    
    // Print the result to output.txt
cout << " " << answer<< "\n";
    return 0;
}