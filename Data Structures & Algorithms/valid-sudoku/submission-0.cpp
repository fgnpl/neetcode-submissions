class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool sq[9][9] = {false};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int val = board[i][j] - '1'; 
                    int sq_idx = (i / 3) * 3 + (j / 3);

                    if (row[i][val] || col[j][val] || sq[sq_idx][val]) {
                        return false;
                    }

                    row[i][val] = true;
                    col[j][val] = true;
                    sq[sq_idx][val] = true;
                }
            }
        }
        return true;
    }
};