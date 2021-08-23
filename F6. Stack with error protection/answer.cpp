#include <iostream>
#include <vector>
#include <string>

using namespace std;

class stack {
    vector<int> v;
    int size;
public:
    void push(int n);
    void pop();
    void back();
    void sz();
    void clear();
};

void stack::push(int n) {
    v.push_back(n);
    cout << "ok" << endl;
}

void stack::pop() {
    if(v.size()) {
        cout << v[v.size() - 1] << endl;
        v.pop_back();
    } else {
        cout << "error" << endl;
    }
}

void stack::back() {
    if(v.size()){
        cout << v[v.size() - 1] << endl;}
    else cout << "error" << endl;
}

void stack::sz() {
    cout << v.size() << endl;
}

void stack::clear() {
    v.clear();
    cout << "ok" << endl;
}

string command = "";

int main() {
    stack mn;
    while(command != "exit") {
        cin >> command;
        if(command == "push") {
            int n; cin >> n;
            mn.push(n);
        } else if(command == "pop") {
            mn.pop();
        } else if(command == "back") {
            mn.back();
        } else if(command == "size") {
            mn.sz();
        } else if(command == "clear") {
            mn.clear();
        }
    }
    cout << "bye" << endl;
    return 0;
}




