#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
      int l = 0;
      int mx = 0;
      int res = 0;
      vector<int>f(26,0);

      for(int r = 0; r < s.size(); r++){
        f[s[r]-'A']++;

        mx = max(mx,f[s[r]-'A']);

        if((r-l+1) - mx > k){
            f[s[l] - 'A']--;
            l++;
        }
        res = max(res,(r-l+1));
      }

      return res;
    }
};
