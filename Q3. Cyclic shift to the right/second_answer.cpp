#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int len; cin >> len;
    vector<int> gamma(len);
    vector<int> alpha(len);
    
    for (int i = 0; i < len; i++) {
        cin >> gamma[i];
        alpha[(i+1)%len] = gamma[i];
    }
    
    for (int i = 0; i < len; i++) {
        cout << alpha[i] << " ";
    }
    
    
}
