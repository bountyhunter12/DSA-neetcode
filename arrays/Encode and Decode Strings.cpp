#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    string encode(vector<string>& strs) {

        string en = "";
        for(string x:strs){
            en += to_string(x.size())+ ',' + x;
        }

        return en;
    }

    vector<string> decode(string s) {

        vector<string> de;

        int i = 0;

        while(i<s.size()){
            int j = i;
            while(s[j] != ',')
            j++;

            int l = stoi(s.substr(i,j-i));

            j++;

            string x = s.substr(j,l);

            de.push_back(x);

            i = j+l;

        }

        return de;
    }
};
