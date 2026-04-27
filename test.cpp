#include<bits/stdc++.h>
using namespace std;
//STL(standard template library)
void explainPair(){ //pair=stores two value together 
pair<int, int> p = {2,3};
cout<< p.first << "" << p.second;
pair<int,pair<int, int>> p={1,{2,3}};
cout<<p.first<< ""<<p.second.second<<""<<p.second.first;
pair<int,int>arr[] ={{1,2},{2,5}{3,6}};
cout<< arr[1].second;
}

//vectors =it is dynamic array that can grow or shrink in size automatically
void explainVectors(){
vector<int> v;
v.push_back(1);
v.emplace_back(2);

vector<pair<int,int>>vec; //vector for pairs 
v.push_back({1,2});
v.emplace_back(3,4);

vector<int>v{5,100}; //gives ={100,100,100,100,100}
vector<int>v1{3,20};
vector<int>v2(v1); // gives copy of v1
cout<< v[0]<<"";
cout<< v.back()<<""; // give last element not an iterator

//iterators
vector<int>::iterator it = v.begin();// give memory location of first element use * for element
it++;
cout<< *(it)<<"";
vector<int>::iterator it = v.end();//points after last element ,if want to last element use it--
vector<int>::iterator it = v.rend();// reverse of end
vector<int>::iterator it = v.rbegin();// reverse of begin

for(vector<int>::iterator it = v.begin();it !=v.end();i++){
    cout<< *(it)<< "";
}
for(auto it =v.begin();it !=v.end();i++){ //auto = auto assign 
    cout<< *(it)<<"";
}
for(auto it : v){
    cout<< it << "";
}
v.erase(v.begin()+1); // erase=erase the value here it will erase second value 
v.erase(v.begin()+1,v.begin()+3); //double erase erase two values *end value must be after the value we want to delete e.g={10,12,23,24}if we want to delete 12,23 in end value we have to give +3 for +2 position
//insert 
vector<int>v(2,10);//{10,10}
v.insert(v.begin(),50);//{50,10,10}
v.insert(v.begin()+1,2,20)//{50,20,20,10,10}

vector<int>copy(2,50);//{50,50}
v.insert(v.begin(),copy.begin(),copy.end());// {50,50,50,20,20,10,10}
cout<<v.size();//7={50,50,50,20,20,10,10}
v.clear();//clear entire vector
cout<<v.empty();
v1.swap(v2);//value of v1 swaps with v1

}

//list = it is a doubly link list container faster than vector
void explainList(){
list<int>ls;
ls.push_back(2);//{2}
ls.emplace_back(4);//{2,4}
ls.push_front(5);//{5,2,4}
//rest functions are same as vectors 
}
//deque=dynamic array and double ended operations add/delete from front and back}
void explainDeque(){
    deque<int>dq;
dq.push_back(2);//{2}
dq.emplace_back(4);//{2,4}
dq.push_front(5);//{5,2,4}
dq.pop_back();//{5,2}
dq.pop_front();//{2}
//same as previous
}

//stack=LIFO=last in first out last element inserted is first one to remove
void explainStack(){
stack<int>st;
st.push(1);//{1}
st.push(2);//{2,1}
st.push(3);//{3,2,1}
st.push(4);//{4,3,2,1}
st.pop();//{3,2,1}
cout<<st.top();//=3
cout<<st.size();//=3 size
stack<int>st1,st2;
st1.swap.st2;//swap st1 value in st2
}
//queue=fifo
void explainQueue(){
queue<int>q;
q.push(1);//{1}
q.push(2);//{1,2}
q.back() +=5;//{1,7}2+5
cout<<q.back();//{7}
cout<<q.front();//{1}
q.pop();//{7}
}
//pq=(priorityqueue)=highest priority element is always on top
void explainPq(){
    priority_queue<int>pq;
pq.push(1);//{1}
pq.push(2);//{2,1}
cout<<pq.top;//{2}
pq.pop();//[1]
//minimum heap = lowest value on top
priority_queue<int,vector <int>,greater<int>>pq;
pq.push(2);//{1}
pq.push(1);//{1,2}
cout<<pq.top;//{1}
}
//set=stores unique element in sorted order
void explainSet(){
    set<int>st;
    st.insert(1);//{1}
    st.insert(1);//{1}does not duplicate same value 
    st.insert(3)//{1,3}
    st.emplace(2)//{1,2,3}

    auto it =st.find(2);
    auto it =st.find(4);//gives st.end
    auto it =st.erase(2);//{1,3}//takes logarithmic time
}
//Multiset=everything same as set but create duplicate
void explainMultiSet(){
multiset<int>ms;
ms.insert(1);//{1}
ms.insert(1);//{1,1}
ms.insert(1);//{1,1,1}
ms.erase(1)//erases all 1

int cnt = ms.count(1)
ms.erase(ms.find(1));//delete only one instance of one
}
void explainUSet(){
unordered_set <int> st;
}
//Map=unique key in sorted order but values has duplicates
void explainMap(){
map<int,int>mpp;
map<int,pair<int,int>>mpp;
map<pair<int,int>,int>mpp;
mpp[1]=2;
mpp.insert({1,2});
mpp.emplace({1,3})
for(auto it:mpp){
    cout<<it.first<<""<<it.second<<endl;
}
cout<<mpp[5];
cout<<mpp[1];
}
void explainMultiMap(){
    //it can store multiple keys
}
void explainUnorderedMap(){
    // no sorted keys
}
void explainExtra(){
sort(a,a+n);
sort(v.begin(),v.end());
sort(a,a+3);//{1,2,3}
sort(a,a+n,grater<int>);
pair<int,int> a[]={{3,4},{2,3},{4,3}}

}