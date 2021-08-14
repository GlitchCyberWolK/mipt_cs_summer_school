#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int octal_decimal(int n) {
    int converted = 0, remainder = 0, p = 0;
    do {
        remainder = n % 10;
        n /= 10;
        converted += remainder * pow(8, p);
        ++p;
    } while(n);
    return converted;
}

int n;

int main() {
    cin >> n;
    int out = octal_decimal(n);
    cout << out << endl;
    return 0;
}

