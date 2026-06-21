#include<iostream>
#include<vector>
using namespace std; 
//dutch National flag algorithm  
class Solution {
public:
    // O(N) Time | O(1) Space 
    void SortcolorsArray(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low++; 
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else { 
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
    
int main() {
    // Magic file routing
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Read the array size from input
    int n;
    if (!(cin >> n)) return 0; 
    vector<int> arr(n);
    
    // Read the array numbers
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
 
    // ------------------------------------------
    // 3. TEST YOUR LOGIC HERE
    // ------------------------------------------
    Solution mySolution;             
    
    // FIX 1 & 2: Just call the function and pass 'arr'! 
    // It is 'void', so it modifies 'arr' directly in memory.
    mySolution.SortcolorsArray(arr); 
    
    // FIX 3: Print the array using a loop
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    return 0;
}