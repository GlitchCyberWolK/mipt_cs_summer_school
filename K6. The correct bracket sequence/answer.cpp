#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool flag_1(const char &cst) {
    return ((cst == '(') || (cst == '[') || (cst == '{'));
}

bool flag_2(const char &st, const char &end) {
    return ((st == '(' && end == ')') || (st == '{' && end == '}') || (st == '[' && end == ']'));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string message; cin >> message;
    vector<int> brbg; brbg.reserve(message.size());
    bool main_flag = true;
    for(int i = 0; i < message.size(); ++i) {
        if(flag_1(message[i])) {
            brbg.push_back(i);
        } else {
            if(brbg.size() && flag_2(message[brbg.back()], message[i])) {
                brbg.pop_back();
            } else main_flag = false;
        }
    }
    main_flag = (main_flag && !brbg.size());
    (main_flag)? cout << "yes": cout << "no";
    cout << endl;
    return 0;
}

