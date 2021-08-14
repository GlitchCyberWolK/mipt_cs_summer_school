#include <iostream>
#include <vector>

using namespace std;

int n;

int count(vector<int> &v, const int &x) {
    int counter = 0;
    for(const int &j : v) {
        if(j == x) ++counter;
    }
    return counter;
 }

int main() {
    cin >> n;
    vector<int> v(n);
    for(int &i : v) cin >> i;
    for(int i = 0; i < n; ++i) {
        int c = count(v, v[i]);
        if(c == 1) cout << v[i] << " ";
    } cout << endl;
    return 0;
}
