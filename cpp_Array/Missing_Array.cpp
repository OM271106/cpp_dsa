#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int MissingArray(vector<int>& arr){
        int n=arr.size()+1;
        int perfectSum;
        perfectSum=n*(n+1)/2;
        int actualsum=0;
        for(int i=0;i<arr.size();i++){
        actualsum=actualsum += arr[i];  
    }
        return(perfectSum-actualsum);     
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
   int missingNumber = mySolution.MissingArray(arr);// Run your tool
    
    // Print the result to output.txt
cout << "The missing number is: " << missingNumber << "\n";
    return 0;
}