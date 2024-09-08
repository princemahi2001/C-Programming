#include <bits/stdc++.h>
using namespace std;

void bfs(int i, int j, vector<vector<int>>& grid, vector<pair<int, int>>& shape) {
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int, int>> q;
    q.push({i, j});
    grid[i][j] = 0;
    shape.push_back({0, 0});
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (auto& dir : directions) {
            int newX = x + dir.first;
            int newY = y + dir.second;

            if (newX >= 0 && newY >= 0 && newX < n && newY < m && grid[newX][newY] == 1) {
                grid[newX][newY] = 0;
                q.push({newX, newY});
                shape.push_back({newX - i, newY - j});
            }
        }
    }
}

int countDistinctIslands(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    set<vector<pair<int, int>>> distinctIslands;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                vector<pair<int, int>> shape;
                bfs(i, j, grid, shape);
                distinctIslands.insert(shape);
            }
        }
    }

    return distinctIslands.size();
}

int main() {
    vector<vector<int>> grid = {
        {1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1},
        {0, 0, 0, 1, 1},
        {1, 1, 0, 0, 0}
    };

    cout << "Number of distinct islands: " << countDistinctIslands(grid) << endl;

    return 0;
}
