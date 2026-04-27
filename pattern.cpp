#include <bits/stdc++.h>
using namespace std;
void print1 (int n){
for(int i = 0;i<n;i++){
    for(int j = 0;j<=i;j++){
    cout <<"*";
} 
cout<< endl;
}
}
void print2 (int n){
for(int i = 1;i<n;i++){
    for(int j = 0;j<=n-i+1;j++){
    cout<<"* ";
} 
cout<< endl;
}
}
void print3 (int n){
for(int i = 1;i<n;i++){
    for(int j = 1;j<=n-i+1;j++){
    cout<<j <<" ";
} 
cout<< endl;
}
}
void print4 (int n){
    for(int i = 1;i<n;i++){
    for(int j = 1;j<=n-i+1;j++){
    cout<<j <<" ";
} 
cout<< endl;
}
}
void print5 (int n){
    for(int i = 0;i<n;i++){
        //space
    for(int j = 0;j<i;j++){
    cout <<" " ;}
    //star
 for(int j =0; j<2*n-(2*i + 1); j++){
    cout << "*" ;
 } //space
 for(int j = 0;j<i;j++){
    cout << " " ;
 }
cout<< endl;
}
}
void print6 (int n){
    for(int i = 1; i<=2*n-1; i++){
    int stars = i;
    if(i>n)stars=2*n-i;    
    for(int j= 1; j<=stars; j++){
        cout<<"*" ;
    }
    cout << endl ;
    }
}
void print7 (int n){
    int space = 2*(n-1) ;
    for(int i = 1; i<=n; i++){
    //numbers
    for(int j= 1; j<=i; j++){
        cout<< j;
    }
    //space
    for(int j = 1; j<=space; j++){
        cout<< " ";
    }
    //numbers
    for(int j= i; j>=1; j--){
        cout<< j;
        
    }
    cout << endl ;
    space -= 2;
    }
}
void print8 (int n){
    int num = 1;
    for(int i = 1 ; i<=n; i++){
    for(int j = 1 ; j<i; j++ ){
        cout<<num << "" ;
        num=num+1;
    }
    cout << endl ;
    }
}
void print9 (int n){

    for(int i=0; i<n; i++){
        for(char ch ='A'; ch<='A'+ i; ch++){
        cout<<ch<<" ";
    }
cout<<endl;
} }
void print10(int n){
    for(int i=0; i<n; i++){
        for(char ch ='A'; ch<= 'A'+(n-i-1); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print11(int n){
for(int i= 0; i<n; i++){
    char ch ='A'+i;
    for(int j=0; j<=i; j++){
        cout<<ch<<" ";
    }
    cout<<endl;
}
}
void print12(int n){
    for(int i =0;i<n; i++){
    //space
   for(int j=0; j<n-i-1; j++){
    cout<<" ";
   }
    //characters
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
    for(int j=1; j<=2*i + 1; j++){
        cout<<ch;
        if(j<=breakpoint ) ch++ ;
        else ch--;
    }
    //space
   for(int j=0; j<n-i-1; j++){
    cout<<" ";   
}
   cout<< endl;
}
}
void print13 (int n){
     int iniS = 0;
    for(int i=0; i<n; i++){
        // stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        } //spaces
        for(int j=0;j<iniS; j++){
            cout<<" ";
        }
        // stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
    }
     iniS +=2;
     cout<<endl;
}
     iniS =8; 
     for(int i=1;i<=n; i++) {
// stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        } //spaces
        for(int j=0;j<iniS; j++){
            cout<<" ";
        }
        // stars
        for(int j=1; j<=i; j++){
            cout<<"*";
    }
     iniS -=2;
     cout<<endl;
}
}

void print14(int n){
    int spaces = 2*n-2;
for(int i=1;i<=2*n-1;i++){
int stars = i;
if(i>n)stars=2*n-i;
//stars
for(int j=1; j<=stars; j++){
    cout<<"*";
}
//spaces
for(int j=1; j<=spaces;j++){
    cout<< " ";
}
//stars
for(int j=1; j<=stars; j++){
    cout<<"*";
}
cout<<endl;
if(i<n)spaces-=2;
else spaces +=2;
}
}
void print15 (int n){
    for(int i = 0; i<n ; i++){
    for(int j = 0; j<n; j++){
        if(i==0||i==n-1|| j==0 ||j==n-1){
            cout<<"*";
        }else cout << " ";
    }cout<<endl;
    }
}
void print16 (int n){
      for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
    int top = i;
    int left = j;
    int down =(2*n-i)-i;
    int right =(2*n-2)-j;
    cout<<n-min(min(top,down), min(left,right));
      }
      cout <<endl;
    }
}
int main() {
int t;
cin >> t;
    for(int i = 0;i<t;i++) {
    int n ;
    cin >> n ;
    print16(n);
    }
}