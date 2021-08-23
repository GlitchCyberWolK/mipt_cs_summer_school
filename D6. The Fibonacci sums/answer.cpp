#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


vector<int> fib;
int need;
int k;

void gen(vector<int> &cur, int sum, int cnt_last, int pos_last_in_fib) {
    if(sum > need) return;
    if(sum == need) {
        for(int i = 0; i < cur.size(); ++i) {
            if(i != cur.size() - 1) {
                cout << cur[i] << "+";
            } else cout << cur[i];
        }
        cout << endl;
        return;
    }
    if(cnt_last > 0 && cnt_last < k) {
        cur.push_back(cur.back());
        gen(cur, sum + cur.back(), cnt_last + 1, pos_last_in_fib);
        cur.pop_back();
    }
    
    for(int new_value = pos_last_in_fib + 1; new_value < fib.size(); ++new_value) {
        cur.push_back(fib[new_value]);
        gen(cur, sum + cur.back(), 1, new_value);
        cur.pop_back();
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> need >> k;
    fib = {1, 2};
    while(fib.back() < need) {
        fib.emplace_back(fib.back() + fib[fib.size() - 2]);
    } vector<int> cur;
    gen(cur, 0, 0, -1);
    return 0;
}

