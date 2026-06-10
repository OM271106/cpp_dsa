#include<iostream>
using namespace std;

class Solution{
    public:
    vector<int> SortedArray(vector<int>& a,vector<int>&b){
        int n1 = a.size();
        int n2 = b.size() ;  
        int i = 0;
        int j = 0;
        vector<int> temp;
        while(i<n1 && j<n2){
            if(a[i]==b[j]){
                if(temp.size()==0 || temp.back()!=a[i]){
                    temp.push_back(a[i]);
                }
                i++;
                j++;
            }
                else if(a[i]<b[j]){
                    i++;
                }
            
            else{
            j++;
        }
        } return temp;
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