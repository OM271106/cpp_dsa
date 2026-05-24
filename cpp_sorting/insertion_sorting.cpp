//insertion sorting = takes element and sort
//in its correct position
//insertion sort automatically reject sorted values
//doesn't run loop tc =O(n)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<=n-1;i++){
    cin >> arr[i];}
    for(int i = 0;i<=n-1;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
    j--;}
    }
for(int i = 0;i<=n-1;i++){
    cout << arr[i] << " ";
}
    return 0;
}