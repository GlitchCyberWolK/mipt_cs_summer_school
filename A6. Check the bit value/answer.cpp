#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> binary(long long n) {
    vector<int> bin;
    do {
        bin.push_back(n % 2);
        n /= 2;
    } while(n);
    return bin;
}

long long a, n;

int main() {
    cin >> a >> n;
    vector<int> v_bin = binary(a);
    if(v_bin[n - 1] == 1) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}

