#include <iostream>

using namespace std;

int r, i, c, verdict;

int main() {
    cin >> r >> i >> c;
    switch (i) {
        case 0: {
            if(r) verdict = 3;
            else verdict = c;
            break;
        }
        case 1: {
            verdict = c;
            break;
        }
        case 4: {
            if(r) verdict = 3;
            else verdict = 4;
            break;
        }
        case 6: {
            verdict = 0;
            break;
        }
        case 7: {
            verdict = 1;
            break;
        }
        default: verdict = i;
    }
    cout << verdict << endl;
    return 0;
}
