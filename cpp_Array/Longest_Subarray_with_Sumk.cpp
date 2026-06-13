#include<iostream>
#include<vector>
using namespace std; 
class Solution {
public:
    int longestSubarrayWithSumK(vector<int>& arr, long long k) {
        long long sum = 0;
        int maxlength = 0;
        unordered_map<long long, int> preSumMap;
        
        for (int i = 0; i < arr.size(); i++) {
            sum = sum + arr[i];   
            
            // CHECK 1: Perfect match from the start
            if (sum == k) {
                maxlength = max(maxlength, i + 1);
            }
            
            // CHECK 2: Do we have a remainder we can chop off?
            long long rem = sum - k;
            
            // 1st Fix: The missing 'if' statement!
            if (preSumMap.find(rem) != preSumMap.end()) {
                int historyIndex = preSumMap[rem];
                int length = i - historyIndex;
                maxlength = max(maxlength, length);
            }
            
            // UPDATE HISTORY: Only save it if it's the FIRST time we've seen it
            // 2nd Fix: The missing 'if' statement!
            if (preSumMap.find(sum) == preSumMap.end()) {
                preSumMap[sum] = i;
            }
        }
        
        return maxlength;
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