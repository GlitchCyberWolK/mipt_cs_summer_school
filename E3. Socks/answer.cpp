#include <iostream>
#include <vector>

using namespace std;

int l, n, m;

int summarise(vector<int> &v, const int &point) {
    int sum = 0;
    for(int i = 0; i < point + 1; ++i) {
        sum += v[i];
    }
    return sum;
}

int main() {
    cin >> l >> n >> m;
    vector<int> socks(l + 2, 0);
    for(int i = 0; i < n; ++i) {
        int start, end;
        cin >> start >> end;
        ++socks[start];
        --socks[end + 1];
    }
    vector<int> points(m);
    for(int &point : points) cin >> point;
    for(int &point : points) {
        cout << summarise(socks, point) << endl;
    }
    return 0;
}

