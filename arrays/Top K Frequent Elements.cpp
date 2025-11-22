#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;

        for(int x:nums){
            m[x]++;
        }

        int n = nums.size();
        vector<vector<int>>f(n+1);

        for(auto &x:m){
            int num = x.first;
            int c = x.second;

            f[c].push_back(num);
        }

        vector<int>r;
        for(int i = n; i>=1 && r.size()< k; i--){
            for(int num:f[i])
            {
                r.push_back(num);
                if(r.size()==k) break;
            }
        }

        return r;
    }
};