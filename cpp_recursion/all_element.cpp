#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
vector<vector<int>> subsets(vector<int>& nums){
    int n=nums.size();
    vector<int>currentset;
    vector<vector<int>>masterset;
    int index=0;
    solve(nums, index, currentset, masterset);
        return masterset;
    
}
    void solve(vector<int>& nums, int index, vector<int>& currentset, vector<vector<int>>& masterset){
        if((index==nums.size())){
            masterset.push_back(currentset);
            return ;
        }
       solve(nums, index + 1, currentset, masterset);
       currentset.push_back(nums[index]);
       solve(nums, index + 1, currentset, masterset);
       currentset.pop_back();
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