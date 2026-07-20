class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9),col(9),box(9);

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                int boxidx = (i / 3) * 3 + (j / 3);
                char c=board[i][j];
                if(c=='.') continue;

                if(rows[i].count(c)) return false;
                rows[i].insert(c);

                if(col[j].count(c)) return false;
                col[j].insert(c);

                if(box[boxidx].count(c)) return false;
                box[boxidx].insert(c);
            }
        }
        return true;
    }
};
