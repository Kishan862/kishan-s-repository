#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <string>
#include <cstring>
#include <limits>
#include <numeric>

using namespace std;

using ll = long long;
using ld = long double;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        a[i] = x + i + 1;
    }
    sort(all(a));
    int maxTeleports = 0;
    for(auto it : a){
        if(c <= 0){
            cout << maxTeleports << '\n';
            return;
        }
        if(c >= it){
            c -= it;
            maxTeleports++;
        }
    }
    cout << maxTeleports << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}