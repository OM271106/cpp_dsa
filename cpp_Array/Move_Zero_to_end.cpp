#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int j = -1;
        
        // 1. Find the first zero (The Slow Pointer)
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                j = i;
                break; // Safely locked inside the if-block!
            }
        }
        
        // EDGE CASE: If no zeroes exist, do nothing!
        if(j == -1){
            return;
        }
        
        // 2. Scout for non-zeroes and swap (The Fast Pointer)
        for(int i = j + 1; i < n; i++){
            if(arr[i] != 0){
                swap(arr[i], arr[j]);
                j++; // Steps forward only AFTER a successful swap
            }
        }
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
int k;
    cin >> k ;   
    // ------------------------------------------
    // 3. TEST YOUR LOGIC HERE
    // ------------------------------------------
    Solution mySolution;             // Create your tool
    mySolution.moveZeroes(arr); // Run your tool
    
    // Print the result to output.txt
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}