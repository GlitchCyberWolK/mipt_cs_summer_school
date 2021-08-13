#include <iostream>
#include <string>
#include <algorithm>
#define str string

using namespace std;

str karp_message;
long out = 0;

int main() {
    while(getline(cin, karp_message)){
        if(!(karp_message.empty())) {
            int counter = 0;
            for(const char &c : karp_message) {
                if(c == ' ') {
                    ++counter;
                }
            }
            out += counter;
        }
    } cout << out << endl;
    return 0;
}
