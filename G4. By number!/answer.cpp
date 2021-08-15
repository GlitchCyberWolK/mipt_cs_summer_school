#include <iostream>
#include <vector>
 
using namespace std;
 
int factorial(int n) {
    if(n < 2) return 1;
    return factorial(n - 1) * n;
}

int xn_used(vector<bool> &used, int thr) {
    int pos = 0, j;
    for(j = 1; j < used.size(); ++j) {
        if(!used[j]) ++pos;
        if(pos == thr) break;
    }
    return j;
}

vector<int> perm_num(int n, int num) {
    vector<int> result_arr(n);
    vector<bool> used_map(n + 1, 0);
    for(int i = 0; i < n; ++i) {
        int thr = (num - 1)/factorial(n - i - 1) + 1;
        int j = xn_used(used_map, thr);
        result_arr[i] = j;
        used_map[j] = 1;
        num = (num - 1) % factorial(n - i - 1) + 1;
    }
    return result_arr;
}

int main() {
    int n, num;
    cin >> n >> num;
    vector<int> v = perm_num(n, num);
    for(const int &i : v) cout << i << " ";
    cout << endl;
    return 0;
}

