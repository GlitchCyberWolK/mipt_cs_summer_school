#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int closest(vector<int> &alpha, const int &x) {
    sort(alpha.begin(), alpha.end());
    auto it = lower_bound(alpha.begin(), alpha.end(), x);
    if(it == alpha.end()) return alpha.back();
    int one_bound = *(it), second_bound = *(it - 1);
    if(it != alpha.begin()) {
        int abs2 = abs(x - second_bound), abs1 = abs(x - one_bound);
        if(abs2 < abs1) {
            one_bound = second_bound;
        }
    } return one_bound;
}

int n, x;

int main() {
    cin >> n;
    vector<int> v(n);
    for(int &i : v) cin >> i;
    cin >> x;
    cout << closest(v, x) << endl;
    return 0;
}

