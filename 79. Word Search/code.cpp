
class Solution {
public:
    bool solve(vector<vector<char>>& board, int i, int j, string& word, int pos) {
        if (pos == word.size())
            return true;

        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[pos])
            return false;

        char temp = board[i][j];
        board[i][j] = '*'; // Mark as visited

        bool found = solve(board, i + 1, j, word, pos + 1) ||
                     solve(board, i - 1, j, word, pos + 1) ||
                     solve(board, i, j + 1, word, pos + 1) ||
                     solve(board, i, j - 1, word, pos + 1);

        board[i][j] = temp; // Restore original value
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == word[0] && solve(board, i, j, word, 0))
                    return true;
            }
        }
        return false;
    }
};
