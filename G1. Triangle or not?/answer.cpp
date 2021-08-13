#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    bool flag1 = ((a < 0) || (b < 0) || (c < 0));
    bool flag2 = (((a + b) <= c || (b + c) <= a || (c + a) <= b));
    if(flag1 || flag2) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
