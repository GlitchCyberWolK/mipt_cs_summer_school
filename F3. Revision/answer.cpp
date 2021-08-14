#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(vector<int> &v) {
    for(int i = 0; i < v.size(); ++i) {
        for(int j = i + 1; j < v.size(); ++j) {
            if(v[i] > v[j]) swap(v[i], v[j]);
        }
    }
}

int n;

int main() {
    cin >> n;
    vector<int> droids(n);
    for(int &droid : droids) cin >> droid;
    sort(droids);
    cout << droids[0] << " " << droids[1] << endl;
    return 0;
}

