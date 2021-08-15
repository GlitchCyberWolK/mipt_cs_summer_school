#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int &i : v) cin >> i;
    next_permutation(v.begin(), v.end());
    for(const int &i : v) cout << i << " ";
    cout << endl;
    return 0;
}

