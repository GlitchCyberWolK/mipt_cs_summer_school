#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> out;

int main() {
    cin >> n;
    vector<int> alpha(n);
    for(int &i : alpha) cin >> i;
    cin >> m;
    vector<int> betta(m);
    for(int &i : betta) cin >> i;
    for(int i = 0; i < alpha.size(); i++)  {
        for(int j = 0; j < betta.size(); j++) {
            if(alpha[i] == betta[j]) {
                out.emplace_back(betta[j]);
                betta.erase(betta.begin() + j);
                break;
            }
        }
    }
    for(int &l : out) cout << l << " ";
    cout << endl;
    return 0;
}
