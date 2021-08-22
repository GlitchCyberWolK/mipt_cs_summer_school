#include <string>
#include <iostream>

using namespace std;

int main() {
    string cypher; int k;
    getline(cin, cypher);
    cin >> k;
    while(k--) {
        for(char &c : cypher) {
            c = ((c > 'A') && (c <= 'Z')) ? c = (char)((int)c - 1): c = 'Z';
        }
    } cout << cypher << endl;
    return 0;
}

