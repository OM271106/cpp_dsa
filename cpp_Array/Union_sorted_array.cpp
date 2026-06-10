#include <iostream>
using namespace std;
class Solution{
public:
    vector<int> SortedArray(vector<int>& a,vector<int>&b){
    int n1 =a.size();
    int n2 =b.size();
    int i=0;
    int j=0;
    vector<int>temp;
    while(i<n1 && j<n2){
    if(a[i]<=b[j]){
        if(temp.back() =! a[i]){
            temp.push_back(a[i]);
        }
        i++;
    }
    else{
        if(b[j]<=a[i]){
                temp.push_back(b[j]);
            }
        j++;}
    
    }
    // 2. What if array 'b' finished early, but array 'a' still has numbers?
    while(i<n1){
        if(temp.back()!=a[i]){
        temp.push_back(a[i]);}
    i++}
    // 3. What if array 'a' finished early, but array 'b' still has numbers?
 while(j<n2){
    if(temp.back()!=b[j]){
        temp.push_back(b[j]);}
    j++
    }    
return temp;
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
    mySolution.SortedArray(arr); // Run your tool
    
    // Print the result to output.txt
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}