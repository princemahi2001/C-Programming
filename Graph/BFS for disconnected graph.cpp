#include <bits/stdc++.h>
using namespace std;

vector<int> v1[10001];

void bfs(int startNode, vector<bool>& visited) {
    queue<int> q;
    q.push(startNode);
    visited[startNode] = true;

    while (!q.empty()) {
        int currNode = q.front();
        q.pop();

        cout << currNode << " ";

        for (int j = 0; j < v1[currNode].size(); j++) {
            int nextNode = v1[currNode][j];
            if (!visited[nextNode]) {
                visited[nextNode] = true;
                q.push(nextNode);
            }
        }
    }
}

void bfsDisconnected(int V) {
    vector<bool> visited(V + 1, false);

    for (int i = 1; i <= V; i++) {
        if (!visited[i]) {
            bfs(i, visited);
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

    cout << "BFS for disconnected graph: ";
    bfsDisconnected(V);
    cout << endl;

    return 0;
}
