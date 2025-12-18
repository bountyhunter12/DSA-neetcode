#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mxp = 0;
        int mni = INT_MAX;

        for(int p : prices){
            mni = min(mni, p);
            mxp = max(mxp, p - mni);
        }

        return mxp;
    }
}