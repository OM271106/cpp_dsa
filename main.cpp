#include <bits/stdc++.h>
using namespace std;
class solution {
  double num = {2,7,11,15}
add =num[0] + num[1];
unordered_map<int, int> mpp;
for(int i=0;i<nums.size();i++){
  int neededNumber = target - nums[i];
  if(mpp.find(neededNumber) != mpp.end()){
    return mpp[neededNumber]; return i;
  }
  else{mpp[nums[i]] = i;}
}
return{};
}; 
