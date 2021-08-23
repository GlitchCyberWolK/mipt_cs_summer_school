#include <iostream>
#include <vector>

using namespace std;

int func(int x, int y, vector<vector<int>> &a) {
    if(a[x][y] == 0) {
        a[x][y] = 1;
        return 1 + func(x - 1, y, a) + func(x + 1, y, a) + func(x, y - 1, a) + func(x, y + 1, a);
    }
    return 0;
}

int main() {
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            char c; cin >> c;
            if(c == '*') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    
    int x, y; cin >> x >> y;
    cout << func( x - 1,  y - 1, a) << endl;
    return 0;
}
