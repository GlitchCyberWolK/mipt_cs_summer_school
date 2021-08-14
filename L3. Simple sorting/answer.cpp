#include <iostream>
#include <vector>

using namespace std;

int n;

vector<int> temp;

void Merge(vector<int> &lambda, int l, int mid, int h) {
    int i = l, j = (mid + 1), k = l; int n = h + 1;
    while(i <= mid && j <= h) {
        if(lambda[i] < lambda[j]) {
            temp[k] = lambda[i]; i++; k++;
        } else {
            temp[k] = lambda[j]; j++; k++;
        }
    }
    while(i <= mid) {
        temp[k] = lambda[i]; i++; k++;
    }
    while(j <= h) {
        temp[k] = lambda[j]; j++; k++;
    }
    for(int i = l; i <= h; i++) {
        lambda[i] = temp[i];
    }
}

void mergeSort(vector<int> &lambda, int l, int h) {
    if(l < h) {
        int mid = (l + h) / 2;
        mergeSort(lambda, l, mid);
        mergeSort(lambda, mid + 1, h);
        Merge(lambda, l, mid, h);
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    temp.resize(n);
    vector<int> v(n);
    for(int &i : v) cin >> i;
    mergeSort(v, 0, n - 1);
    for(int &i : v) cout << i << " ";
    cout << endl;
    return 0;
}




