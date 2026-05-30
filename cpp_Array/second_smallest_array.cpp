#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
int smallest =INT_MAX;    
int ssmallest=INT_MAX;
for(int i=0;i<n;i++){
if(arr[i]<smallest){
    ssmallest=smallest;
    smallest=arr[i];
}
else if(arr[i]!=smallest && arr[i]<ssmallest){
    ssmallest=arr[i];
}
}
cout << ssmallest << endl;
    return 0;
}