#include <iostream>
#include <string>

using namespace std;

string s; long long main_counter = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> s;
    for(const char &c : s) {
        if(c == '0' || c == '6' || c == '9') ++main_counter;
        else if(c == '8') main_counter += 2;
    } cout << main_counter << endl;
}

