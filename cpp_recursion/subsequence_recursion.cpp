#include<bits/stdc++.h>
using namespace std;

void f( int ind,int arr[],int n,vector<int>& current_list){
    
    if(ind>=n){
  for (int i = 0; i < current_list.size(); i++) {
    cout << current_list[i] << " ";
}
cout << endl;
return; }
    current_list.push_back(arr[ind]);
    f(ind+1,arr, n, current_list);
    current_list.pop_back();
    f(ind+1,arr, n, current_list);
}

int main(){
    vector<int>current_list;
    int arr[]={3,1,2};
    int n=3;
    f(0,arr, n,current_list);
    return 0;
}