#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int main() {
    vector<int> num;
    cin >> n;
    if(n < 10) {cout << (n + 10) << "\n"; return 0;}
    else {
        for(int i = 9; i != 1; --i) {
            while(!(n % i)) { n /= i;
                num.push_back(i);
            }
        }
    }
    if(n > 10) {cout << "No solution" << "\n"; return 0;}
    reverse(num.begin(), num.end());
    for(const int &i: num) cout << i;
    return 0;
}
