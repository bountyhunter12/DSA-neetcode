#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end()); 

        for (int i = 0; i < nums.size(); i++) {

            // Skip duplicate 
            if (i > 0 && nums[i] == nums[i - 1]) 
                continue;

            int target = -nums[i];
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                int sum = nums[j] + nums[k];

                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[k]});

                    j++;
                    k--;

                    // Skip duplicates 
                    while (j < k && nums[j] == nums[j - 1]) 
                        j++;

                    // Skip duplicates
                    while (j < k && nums[k] == nums[k + 1]) 
                        k--;
                }
                else if (sum < target) {
                    j++; 
                }
                else {
                    k--;  
                }
            }
        }

        return result;
    }
};
