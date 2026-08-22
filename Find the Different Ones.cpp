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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define pb push_back
#define eb emplace_back

#define ff first
#define ss second

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    ll n;
    cin >> n;
    
    vi a(n);

    for(auto &x : a) cin >> x;

    vi diff(n, n);
    for(int i = n-2; i >= 0; i--){
        if(a[i] != a[i+1]) diff[i] = i+1;
        else diff[i] = diff[i+1];
    }

    ll q;
    cin >> q;

    while(q--){
        ll l, r;
        cin >> l >> r;

        l--;
        r--;

        if(diff[l] <= r){
            cout << l+1 << " " << diff[l]+1 << '\n';
        }
        else{
            cout << -1 << " " << -1 << '\n';
        }
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}