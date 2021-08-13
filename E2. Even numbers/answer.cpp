#include <iostream>

using namespace std;

int rhs, lhs;

int main() {
    cin >> rhs >> lhs;
    (rhs % 2) && rhs++;
    for(int i = rhs; i <= lhs; i += 2) cout << i << " ";
    return 0;
}

