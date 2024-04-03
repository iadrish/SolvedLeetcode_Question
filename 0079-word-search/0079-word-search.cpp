class Solution {
public:
    bool dfs(int r, int c, vector<vector<bool>>& vis, vector<vector<char>>& grid, string word, int i) {
        // CASE ON WHICH WE RETURN TRUE WHEN WORD IS FORMED FROM GRID
        if (i == word.size()) return true;

        // CASE WHEN WE RETURN FALSE FROM OUR FUNCTION
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] != word[i] || vis[r][c]) return false;

        // IF ABOVE CONDITION DIDN'T MATCH MEANS STRING IS BEING FOUND FROM GRID SO WE MOVE AHEAD FROM THIS CELL
        vis[r][c] = true;

        bool res = dfs(r + 1, c, vis, grid, word, i + 1) ||
                   dfs(r - 1, c, vis, grid, word, i + 1) ||
                   dfs(r, c + 1, vis, grid, word, i + 1) ||
                   dfs(r, c - 1, vis, grid, word, i + 1);

        // Reset visited for backtracking
        vis[r][c] = false;

        return res;
    }

    bool exist(vector<vector<char>>& board, string word) {
         vector<vector<bool>> vis(board.size(), vector<bool>(board[0].size(), false));
        for (int i = 0; i < board.size(); ++i)
            for (int j = 0; j < board[0].size(); ++j)
                if (dfs(i, j, vis, board, word, 0)) return true;

        return false;
    }
};