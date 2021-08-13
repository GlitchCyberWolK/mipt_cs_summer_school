#include <iostream>
#include <vector>

using namespace std;

int n;

int minim(const int &a, const int &b) {
    if(a < b) return a;
    return b;
}

int main() {
    cin >> n;
    vector<int> pay(n);
    vector<int> out(n);
    for(int &i : pay) cin >> i;
    out[0] = pay[0];
    out[1] = pay[1];
    for(int i = 2; i < n; ++i) {
        out[i] = minim(out[i - 1], out[i - 2]) + pay[i];
    } cout << *(out.end() - 1) << endl;
    return 0;
}
