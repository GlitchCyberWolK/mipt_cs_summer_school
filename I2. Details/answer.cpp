#include <iostream>

using namespace std;

int n, k, m, production_counter = 0;

int main() {
    cin >> n >> k >> m;
    while(n >= k && k >= m) {
        int t = n / k * (k / m);
        n -= t * m;
        production_counter += t;
    } cout << production_counter << endl;
    return 0;
}
