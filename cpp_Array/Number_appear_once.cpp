#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumberAppearOnes(vector<int>& nums) {
        int n =nums.size();
       int ans =0;
       for(int i=0;i<n;i++){
        ans^=nums[i];
       }
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
   int answer=mySolution.findNumberAppearOnes(arr);// Run your tool
    
    // Print the result to output.txt
cout << " " << answer<< "\n";
    return 0;
}