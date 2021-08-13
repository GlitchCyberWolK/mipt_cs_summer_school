#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int num = 1;
int a = 0, b = 0;

int main() {
    while(num) {
        cin >> num;
        if(num >= a) {
            b = a;
            a = num;
        }
        if(b < num && num < a) {
            b = num;
        }
    }
    cout << b << endl;
    return 0;
}
