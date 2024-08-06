#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> adj[100001]; 
vector<bool> visited(100001, false); 
vector<int> costs(100001); 

void dfs(int node, vector<int>& component) {
    visited[node] = true;
    component.push_back(node);
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, component);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        cin >> costs[i];
    }
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    long long total_cost = 0;
    
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, component);
            
            int min_cost = INT_MAX;
            for (int member : component) {
                min_cost = min(min_cost, costs[member]);
            }
            
            total_cost += min_cost;
        }
    }
    
    cout << total_cost << endl;
    
    return 0;
}
