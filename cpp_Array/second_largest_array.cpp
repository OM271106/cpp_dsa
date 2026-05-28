#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest = INT_MIN;
    int Slargest = INT_MIN;
        Slargest=arr[n-1];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
        Slargest=largest;
        largest=arr[i];
    }else if(arr[i]>Slargest&& arr[i] !=largest){
        Slargest=arr[i];}
    }
    cout<<Slargest<<" ";
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}