#include <iostream>
#include <vector>

using namespace std;

int n;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(vector<int> &v, const int &n) {
    int ind = 1;
    for(int i = 0; i < (n - 1); ++i) {
        for(int j = i + 1; j < v.size(); ++j) {
            if(v[i] < v[j]) {
                swap(v[i], v[j]);}
        }
        cout << ind << " ";
        ++ind;
        for(const int &i : v) cout << i << " ";
        cout << endl;
    }
}

int main() {
    cin >> n;
    vector<int> v(n);
    for(int &i : v) cin >> i;
    sort(v, n);
    cout << endl;
    return 0;
}

