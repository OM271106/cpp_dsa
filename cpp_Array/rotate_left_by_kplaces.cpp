#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
void rotateLeftByK(vector<int>&arr,int k){
    int n =arr.size();
    if (n<=1)return;
    k=k%n;
    vector<int>temp(k);
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    //pullback temp 
    for(int i=0;i<k;i++){
    arr[n-k+i]=temp[i];
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
    mySolution.rotateLeftByK(arr,k); // Run your tool
    
    // Print the result to output.txt
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}