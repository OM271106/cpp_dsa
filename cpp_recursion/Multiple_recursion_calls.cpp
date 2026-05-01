#include<bits/stdc++.h>
using namespace std;

int f(int n){
    int last;
    int slast;
    if(n<=1)return n;
 last=f(n-1) ;
 slast=f(n-2);
return last+slast;
}

int main(){
    int n;
    n= 4;
    cout<<f(n)<<endl;
    return 0;
}