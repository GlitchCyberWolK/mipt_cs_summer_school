#include <iostream>
#include <vector>

using namespace std;

vector<int> binary(int n) {
    vector<int> exp;
    do {
        exp.push_back(n % 2);
        n /= 2;
    } while(n);
    return exp;
}

int n;

int main() {
    cin >> n;
    vector<int> bin = binary(n);
    for(const int &i : bin) cout << i;
    cout << endl;
    return 0;
}
