#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string message;
    while(getline(cin, message)) {
        next_permutation(message.begin(), message.end());
        cout << message << endl;
    }
    return 0;
}
