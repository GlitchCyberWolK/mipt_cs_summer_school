#include <iostream>
#include <vector>
#include <string>

using namespace std;

class queue {
    vector<int> v;
    int size;
public:
    void push(int n);
    void pop();
    void front();
    void sz();
    void clear();
};

void queue::push(int n) {
    v.push_back(n);
    cout << "ok" << endl;
}

void queue::pop() {
    vector<int>::iterator it = v.begin();
    if(v.size()) {
        cout << (*it) << endl;
        v.erase(it);
    } else {
        cout << "error" << endl;
    }
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
        if(command == "push") {
            int n; cin >> n;
            mn.push(n);
        } else if(command == "pop") {
            mn.pop();
        } else if(command == "front") {
            mn.front();
        } else if(command == "size") {
            mn.sz();
        } else if(command == "clear") {
            mn.clear();
        }
    }
    cout << "bye" << endl;
    return 0;
}
