#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool sqr[9][9] = {false};

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){

                if(board[i][j] == '.') continue;

                int num = board[i][j] - '1';

                int b = (i/3)*3+(j/3);
    
                
                if(row[i][num]|| col[j][num] || sqr[b][num])
                return false;

                row[i][num] = true;
                col[j][num] = true;
                sqr[b][num] = true;
            }
        }
        return true;
    }
};
