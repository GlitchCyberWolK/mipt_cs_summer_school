#include <iostream>

using namespace std;

void manual_reversion(int n) {
    if(!n) return;
    else {
        int m; cin >> m;
        manual_reversion(n - 1);
        cout << m << " ";
    }
}

int main() {
    int n; cin >> n;
    manual_reversion(n);
    return 0;
}

