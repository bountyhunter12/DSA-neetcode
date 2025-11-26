#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int d = 0;
        for(int i=0; i < nums.size(); i++)
        {
            d = target - nums[i];

            if(m.find(d) != m.end()){
                return {m[d],i};
            }

            m[nums[i]] = i;
        }

        return {};

    }
};
