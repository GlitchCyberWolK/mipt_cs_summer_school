#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, cnt = 0;
    cin >> n >> k;
    vector<int> v(n);
    for(int &i : v) cin >> i;
    for(int &i : v) {
        while(i > 0) {
            ++cnt;
            i -= k;
        }
    } cout << cnt << "\n";
    return 0;
}
