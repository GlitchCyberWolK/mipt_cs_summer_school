#include <iostream>
#include <string>

using namespace std;

int solve(string &s) {
    int counter = 0;
    for(int i = 0; i < (s.size())/2; ++i) {
        if(s[i] == s[s.size() - i - 1]) continue;
        ++counter;
        (s[i] < s[s.size() - i - 1])? s[s.size() - i - 1] = s[i] : s[i] = s[s.size() - i - 1];
    }
    return counter;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string in; cin >> in;
    cout << solve(in) << endl;
    return 0;
}

