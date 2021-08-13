#include <iostream>
#include <iomanip>

using namespace std;

long double a, b;

int main() {
    cin >> a >> b;
    cout << fixed << setprecision(3) <<
    ((float)a/b) << endl;
    return 0;
}
