#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        sort(nums.begin(),nums.end());
 
        int l = 1;
        int c = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;

            if(nums[i] == nums[i-1]+1)
            c++;

            else{
                l = max(l,c);
                c = 1;
            }
        }

        l = max(l,c);
        return l;
    }
};
