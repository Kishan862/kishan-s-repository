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
    ll n, k, b, s;
    cin >> n >> k >> b >>s;
    ll min_s = k*b;
    ll max_s = k*b + n*(k-1);
    if(s < min_s || s > max_s){
        cout << -1 << endl;
    }
    else{
        vector<ll> ans(n, 0);
        ans[0] = k*b;
        s -= k*b;
        for(ll i = 0; i < n; i++){
            ll add = min(k-1, s);
            ans[i] += add;
            s -= add;
        }
        for(ll x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}