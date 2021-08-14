#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> plots(n*m);
    for(ll &plot : plots) cin >> plot;
    ll k; cin >> k;
    vector<ll> mekslin(k);
    for(ll &meks : mekslin) cin >> meks;
    sort(plots.begin(), plots.end());
    sort(mekslin.begin(), mekslin.end());
    int counter = 0;
    for(const ll &meks : mekslin)  {
        auto it = lower_bound(plots.begin(), plots.end(), meks);
        if(it != plots.end()) { ++counter;
            plots.erase(it);
        }
    } cout << counter << endl;
}

