#include <iostream>
#include <string>
#include <map>

using namespace std;

template<typename T>
struct item {
    T data{};
    item *next{};
};

template<typename T>
class queue {
    item<T> *front{nullptr}, *back{nullptr};
    unsigned long long size_ = 0;
public:
    queue() = default;

    void push(const T &);

    void pop();

    void _front();

    void size();

    void clear();
};

template<typename T>
void queue<T>::push(const T &n) {
    auto *temp = new item<T>();
    temp->data = n;
    temp->next = nullptr;
    if (back == nullptr) {
        back = temp;
        front = temp;
    } else {
        back->next = temp;
        back = temp;
    }
    cout << "ok" << endl;
    ++size_;
}

template<typename T>
void queue<T>::pop() {
    if (front == nullptr) cout << "error" << '\n';
    else {
        cout << front->data << '\n';
        front = front->next;
        if (front == nullptr) back = nullptr;
        --size_;
    }
}

template<typename T>
void queue<T>::_front() {
    if (front == nullptr) cout << "error" << '\n';
    else {
        cout << front->data << '\n';
    }
}

template<typename T>
void queue<T>::size() {
    cout << size_ << '\n';
}

template<typename T>
void queue<T>::clear() {
    cout << "ok" << '\n';
    back = nullptr;
    front = nullptr;
    size_ = 0;
}

string command;

int main() {
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, int> m =
            {{"push",  1},
             {"pop",   2},
             {"front", 3},
             {"size",  4},
             {"clear", 5}};

    queue<int> q;
    while (command != "exit") {
        cin >> command;
        int command_code = m[command];
        switch (command_code) {
            case 1 : {
                int n;
                cin >> n;
                q.push(n);
                break;
            }
            case 2: {
                q.pop();
                break;
            }
            case 3: {
                q._front();
                break;
            }
            case 4 : {
                q.size();
                break;
            }
            case 5 : {
                q.clear();
                break;
            }
        }
    }
    cout << "bye" << endl;
    return 0;
}
