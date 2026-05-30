#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }if(n == 0){
    cout << "0\n";
    return 0;
}//2 pointer  
    int i = 0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    // This prints the count
    cout << "Unique count: " << i + 1 << "\n";
    
    // Add this to see your modified array!
    cout << "Modified array: ";
    for(int k = 0; k <= i; k++){
        cout << arr[k] << " ";
    }
    cout << "\n";
    return 0;
}