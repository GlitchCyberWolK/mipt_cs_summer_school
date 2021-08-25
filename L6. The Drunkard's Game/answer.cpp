#include <iostream>
#include <queue>
#include <string>

using namespace std;

int const_num = 10;

int main() {
    int move = 0;
    queue<int> a, b;
    for(int i = 0, n; i < (const_num / 2) ; ++i) static_cast<void>(cin >> n), a.push(n);
    for(int i = 0, n; i < (const_num / 2) ; ++i) static_cast<void>(cin >> n), b.push(n);
    for( move = 0; !a.empty() && !b.empty() && move < (1e6); ++move) {
        int temp_a = a.front(), temp_b = b.front();
        a.pop(); b.pop();
        queue<int> * win = ((temp_a == 0 && temp_b == (const_num - 1))? &a :(temp_b == 0 && temp_a == (const_num - 1)) ? &b : (temp_a > temp_b)? &a : &b);
        win->push(temp_a); win->push(temp_b);
    }
    cout << ( (a.empty()) ? "second " + to_string(move) : (b.empty()) ? "first " + to_string(move) : "botva" ) << endl;
    return 0;
}

