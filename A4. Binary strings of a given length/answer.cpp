#include <iostream>
#include <string>

using namespace std;

void permute(string &ans, int n) {
    if(!n) {
        cout << ans << endl;
        return;
    }
    ans.push_back('0');
    permute(ans, n - 1);
    ans.pop_back();
    ans.push_back('1');
    permute(ans, n - 1);
    ans.pop_back();
}

int n;

int main() {
    cin >> n;
    string mem;
    permute(mem, n);
    return 0;
}
