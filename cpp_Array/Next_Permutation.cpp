#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // TC = O(N) | SC = O(1)
    void NextPermutation(vector<int>& nums) {
        int index = -1;
        int n =nums.size();
        // step-1 Breakpoint
        for(int i=n-2;i>=0;i--){
           // check if the current number is smaller than the one to its right
            if(nums[i] < nums[i + 1]){
                index=i;
                break;}
            }
        //edge case
        if(index== -1){
            reverse(nums.begin(), nums.end());
            return;
        }
// step-2 
   // Swap Partner (Right to Left again)      
        if(index != -1){
            for(int i = n-1; i>=index;i--){
                if(nums[i]>nums[index]){
                    swap(nums[i],nums[index]);
                    break;}
            }
        }
        // step-3 reverse the right half
        reverse(nums.begin()+index+1,nums.end());
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
   int answer=mySolution.NextPermutation(arr);// Run your tool
    
    // Print the result to output.txt
cout << " " << answer<< "\n";
    return 0;
}