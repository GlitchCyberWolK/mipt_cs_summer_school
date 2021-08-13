#include <iostream>

using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;
    if(!( ((a % 2) + (b % 2)) % 2 )) {
        if((a < 0 && b > 0) || (a > 0 && b < 0)) cout << (long long int)((a + b)/2) << endl;
        else cout << (long long int)(b + (a - b)/2) << endl;
    }
    else cout << "Run away, Tolya-Karp" << endl;
    return 0;
}

