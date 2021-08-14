#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int ans = 0;
    int n; cin >> n;
    vector<int> v(n);
    for(int &i : v) cin >> i;
    while(v.size() > 2) {
        vector<int> p;
        vector<int> s;
        for(int &i : v) {
            if(s.empty() || s.back() == i) {
                s.push_back(i);
            } else {
                if(s.size() < 3) {
                    while(!s.empty()) {
                        p.push_back(s.back());
                        s.pop_back();
                    }
                } else {ans += s.size(); s.clear();}
                s.push_back(i);
            }
        }

        if(s.size() < 3) {
            while(!s.empty()) {
                p.push_back(s.back());
                s.pop_back();
            }
        } else {ans += s.size(); s.clear();}
        if(v.size() == p.size()) break;
        v = p;
    } cout << ans << "\n";
     return 0;
}

