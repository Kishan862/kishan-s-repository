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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(all(a));
    sort(all(b), greater<>());
    ll totalWays = 1;
    for(int i = 0; i < n; i++){
        ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        ll cnt = n - temp;
        totalWays  = totalWays * max(cnt-i, 0LL) % MOD;
    }

    cout << totalWays << '\n';


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}