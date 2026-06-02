#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int LinearSearch(vector<int>& arr,int target) {
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]== target){
                return i;
            }
        }
        return -1;
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
   // 3. Read the Target (NEW!)
    int target;
    cin >> target;
    // ------------------------------------------
    // 3. TEST YOUR LOGIC HERE
    // ------------------------------------------
    Solution mySolution;             // Create your tool
   int answer= mySolution.LinearSearch(arr,target); // Run your tool
    
    // Print the result to output.txt
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
   
   cout << "The index is: " << answer << "\n";

    return 0;
}