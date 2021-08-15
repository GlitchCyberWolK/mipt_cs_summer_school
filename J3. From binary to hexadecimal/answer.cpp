#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string bin, temp, hex;
    unsigned long k;
    int num, counter = 0;
    vector<string> table = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
    cin >> bin;
    k = bin.size();
    if(k % 4) {
        while(k % 4) {
            temp = bin;
            bin = '0';
            bin += temp;
            k = bin.size();
        }
    } temp = "";
    for(char &i : bin) {
        temp += i;
        counter++;
        if(counter == 4) {
            num = 8*(temp[0]-'0') + 4*(temp[1]-'0') + 2*(temp[2]-'0') + (temp[3]-'0');
            hex = table[num];
            cout << hex;
            temp = "";
            counter = 0;
        }
    }
    return 0;
}
