#include <iostream>

using namespace std;

int a, b, c;
int squareA, squareB, squareC;
int ans;

int main() {
    cin >> a >> b >> c;
    squareA = a*a;
    squareB = b*b;
    squareC = c*c;
    bool flag1 = ((a <= 0) || (b <= 0) || (c <= 0));
    bool flag2 = (((a + b) <= c || (b + c) <= a || (c + a) <= b));
    if(flag1 || flag2) cout << "impossible" << endl;
    else {
        if(squareA == squareB + squareC || squareB == squareC + squareA
           || squareC == squareA + squareB) {
            cout << "right" << endl;
        } else if(squareA < squareB + squareC && squareB < squareC + squareA
                  && squareC < squareA + squareB) {
            cout << "acute" << endl;
        } else {
            cout << "obtuse" << endl;
        }
    }

    return 0;
}
