#include <bits/stdc++.h>
using namespace std;

vector<int> v1[10001];

void dfs(int currNode, vector<bool>& visited) {
    visited[currNode] = true;
    cout << currNode << " ";

    for (int j = 0; j < v1[currNode].size(); j++) {
        if (!visited[v1[currNode][j]]) {
            dfs(v1[currNode][j], visited);
        }
    }
}

void dfsDisconnected(int V) {
    vector<bool> visited(V + 1, false);

    for (int i = 1; i <= V; i++) {
        if (!visited[i]) {
            dfs(i, visited);
        }
    }
}

int main() {
    int V, E;
    cout << "Enter V (vertices) and E (edges): ";
    cin >> V >> E;
    cout << endl;

    for (int i = 0; i < E; i++) {
        int x, y;
        cout << "Enter edge (x, y): ";
        cin >> x >> y;
        v1[x].push_back(y);
        v1[y].push_back(x);
    }

    cout << "DFS for disconnected graph: ";
    dfsDisconnected(V);
    cout << endl;

    return 0;
}
