#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

       unordered_map<int,int>f;
       for(int x : nums){
        f[x]++;
        if(f[x]>1) return true;
        
       }
       return false; 
        
    }
};