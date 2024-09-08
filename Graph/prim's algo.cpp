///using dfs

#include <bits/stdc++.h>
using namespace std;

void dfsPrims(int node, vector<pair<int, int>> adj[], vector<bool>& inMST, vector<int>& key, vector<int>& parent) {
    inMST[node] = true;

    for (auto& [v, weight] : adj[node]) {
        if (!inMST[v] && weight < key[v]) {
            key[v] = weight;
            parent[v] = node;
            dfsPrims(v, adj, inMST, key, parent);
        }
    }
}

void primsAlgorithmUsingDFS(int V, vector<pair<int, int>> adj[]) {
    vector<int> key(V, INT_MAX);
    vector<bool> inMST(V, false);
    vector<int> parent(V, -1);

    key[0] = 0;

    dfsPrims(0, adj, inMST, key, parent);

    cout << "Edge   Weight" << endl;
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << "    " << key[i] << endl;
    }
}

int main() {
    int V, E;
    cout << "Enter number of vertices (V) and edges (E): ";
    cin >> V >> E;

    vector<pair<int, int>> adj[V];

    cout << "Enter the edges (u, v) and their weights (w): " << endl;
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cout << "Enter edge (u, v) and weight: ";
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cout << "Prim's Algorithm using DFS: Minimum Spanning Tree (MST): " << endl;
    primsAlgorithmUsingDFS(V, adj);

    return 0;
}



//using queue


#include <bits/stdc++.h>
using namespace std;

void primsAlgorithm(int V, vector<pair<int, int>> adj[]) {
    vector<int> key(V, INT_MAX);
    vector<bool> inMST(V, false);
    vector<int> parent(V, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    key[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;

        for (auto& [v, weight] : adj[u]) {
            if (!inMST[v] && weight < key[v]) {
                key[v] = weight;
                pq.push({key[v], v});
                parent[v] = u;
            }
        }
    }

    cout << "Edge   Weight" << endl;
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << "    " << key[i] << endl;
    }
}

int main() {
    int V, E;
    cout << "Enter number of vertices (V) and edges (E): ";
    cin >> V >> E;

    vector<pair<int, int>> adj[V];

    cout << "Enter the edges (u, v) and their weights (w): " << endl;
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cout << "Enter edge (u, v) and weight: ";
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cout << "Prim's Algorithm: Minimum Spanning Tree (MST): " << endl;
    primsAlgorithm(V, adj);

    return 0;
}
