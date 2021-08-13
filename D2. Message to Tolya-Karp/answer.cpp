#include <iostream>
#include <string>
#define str string

using namespace std;

int n, num;
str out;

int main() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> num;
        out += (char)(num);
    } cout << out << endl;
    return 0;
}
