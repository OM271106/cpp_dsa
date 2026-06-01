#include <bits/stdc++.h>
using namespace std;

// ==========================================
// 1. WRITE YOUR LEETCODE LOGIC HERE
// ==========================================
class Solution {
public:
    void rotateLeftByOne(vector<int>& arr) {
     int n = arr.size(); // Ask the vector for its size
        
        // Edge case: if empty or only 1 element, no rotation needed!
        if(n <= 1) return;
        int temp = arr[0];
    for(int i = 1;i<n;i++){
        arr[i-1]=arr[i];
        }
    arr[n-1]=temp;
} 
    
};

// ==========================================
// 2. THE ENGINE (Leave this alone mostly!)
// ==========================================
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
    mySolution.rotateLeftByOne(arr); // Run your tool
    
    // Print the result to output.txt
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}