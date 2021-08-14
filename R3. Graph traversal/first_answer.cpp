#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

class Graph {
public :
    map<int, int> visited;
    map<int, vector<int>> a;

    void addEdge(int v, int w);
    void dfs(int v);
    int count();
};

void Graph::addEdge(int v, int w) {
    a[v].push_back(w);
    a[w].push_back(v);
}

void Graph::dfs(int v) {
    visited[v] = 1;
    vector<int>::iterator i;
    for(i = a[v].begin(); i != a[v].end(); ++i) {
        if(!visited[*i]) {
            dfs(*i);
        }
    }
}

int Graph::count() {
    int counter = 0;
    for(auto &item : visited) {
        if(item.second == 1) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int n, s; cin >> n >> s;
    Graph mainGraph;
    vector<vector<int>> matrix;
    for(int i = 0; i < n; ++i) {
        vector<int> m(n, 0);
        matrix.emplace_back(m);
    }
    for(vector<int> &v : matrix) {
        for(int &i : v) cin >> i;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(matrix[i][j]) {
                mainGraph.addEdge(i, j);
            }
        }
    }
    mainGraph.dfs(s - 1);
    int ans = mainGraph.count();
    cout << ans << endl;
    return 0;
}
