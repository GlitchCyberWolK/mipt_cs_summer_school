#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    int n, d = 2; cin >> n;
    while((n > 1)) {
        int i = 0;
        while(!(n % d)) {
            ++i; n /= d;
        }
        if(i) { cout << d;
            if(i > 1) cout << "^" << i;
            if(n > 1) cout << "*";
        }
        if(d == 2) ++d;
        else d += 2;
    } cout << endl;
}



