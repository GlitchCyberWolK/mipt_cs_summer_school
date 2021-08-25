#include <iostream>
#include <vector>
#include <string>

using namespace std;

class queue {
    vector<int> v;
    int size;
public:
    void push_f(int n);
    void push_b(int n);
    void pop_f();
    void pop_b();
    void front();
    void back();
    void sz();
    void clear();
};

void queue::push_f(int n) {
    vector<int>::iterator it = v.begin();
    v.insert(it, n);
    cout << "ok" << endl;
}

void queue::push_b(int n) {
    v.push_back(n);
    cout << "ok" << endl;
}

void queue::pop_f() {
    vector<int>::iterator it = v.begin();
    if(v.size()) {
        cout << (*it) << endl;
        v.erase(it);
    } else {
        cout << "error" << endl;
    }
}

void queue::pop_b() {
    if(v.size()) {
        cout << v[v.size() - 1] << endl;
        v.pop_back();
    } else {
        cout << "error" << endl;
    }
}

void queue::back() {
    if(v.size()){
        cout << v[v.size() - 1] << endl;}
    else cout << "error" << endl;
}

void queue::front() {
    vector<int>::iterator it = v.begin();
    if(v.size()){
        cout << (*it) << endl;}
    else cout << "error" << endl;
}

void queue::sz() {
    cout << v.size() << endl;
}

void queue::clear() {
    v.clear();
    cout << "ok" << endl;
}

string command = "";

int main() {
    queue mn;
    while(command != "exit") {
        cin >> command;
        if(command == "push_front") {
            int n; cin >> n;
            mn.push_f(n);
        } else if(command == "push_back") {
            int n; cin >> n;
            mn.push_b(n);
        } else if(command == "pop_front") {
            mn.pop_f();
        } else if(command == "pop_back") {
            mn.pop_b();
        } else if(command == "front") {
            mn.front();
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




