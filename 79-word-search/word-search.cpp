class Solution {
public:
    int m, n;

    // 4 possible directions:
    // down, up, right, left
    vector<vector<int>> direction{
        {1,0},
        {-1,0},
        {0,1},
        {0,-1}
    };

    // DFS + Backtracking function
    bool find(vector<vector<char>>& board, int i, int j, int idx, string& word) {

        // If we have matched the complete word
        if(idx == word.length()){
            return true;
        }

        // Check if current position is outside the board
        if(i < 0 || i >= m || j < 0 || j >= n){
            return false;
        }

        // If current cell doesn't match the current character of word
        if(board[i][j] != word[idx]){
            return false;
        }

        // Store current character before marking it visited
        char temp = board[i][j];

        // Mark current cell as visited
        board[i][j] = '$';

        // Try all 4 possible directions
        for(auto &dir : direction){

            // Calculate new row
            int new_i = i + dir[0];

            // Calculate new column
            int new_j = j + dir[1];

            // Recursively search for the next character
            if(find(board, new_i, new_j, idx + 1, word)){
                return true;
            }
        }

        // Backtracking:
        // Restore the original character
        board[i][j] = temp;

        // Word could not be found from this path
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {

        // Number of rows
        m = board.size();

        // Number of columns
        n = board[0].size();

        // Try every cell as a starting point
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){

                // If first character matches,
                // start DFS from this cell
                if(board[i][j] == word[0] &&
                   find(board, i, j, 0, word)){
                    return true;
                }
            }
        }

        // Word does not exist in the board
        return false;
    }
};