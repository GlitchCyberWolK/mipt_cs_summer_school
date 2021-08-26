#include <iostream>
#include <string>
#include <map>
#define int long long

using namespace std;

const int m = 1e6 + 1;

// stack class implementation
class stack {
    int index = 0;
    int a[m];
public:
    void push(const int &);
    void pop();
    void back();
    void size();
    void clear();
};

void stack::push(const int &n) {
    a[++index] = n;
    cout << "ok" << '\n';
}

void stack::pop() {
    if(!index) cout << "error" << '\n';
     else cout << a[index--] << '\n';
}

void stack::back() {
    if(!index) cout << "error" << '\n';
    else cout << a[index] << '\n';
}

void stack::size() {
    cout << (index) << '\n';
}

void stack::clear() {
    index = 0;
    cout << "ok" << '\n';
}

//cmd
string command;

signed main() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    stack mainStack;
    map<string, int> look {{"push", 1}, {"pop", 2},
                           {"back", 3}, {"size", 4},
                           {"clear", 5}
    };
    while(command != "exit") {
        cin >> command;
        int cmdcode = look[command];
        switch(cmdcode) {
            case 1: {
                int n; cin >> n;
                mainStack.push(n);
                break;
            }
            case 2: {
                mainStack.pop();
                break;
            }
            case 3: {
                mainStack.back();
                break;
            }
            case 4: {
                mainStack.size();
                break;
            }
            case 5: {
                mainStack.clear();
                break;
            }
        }
    }
    cout << "bye" << '\n';
    return 0;
}
