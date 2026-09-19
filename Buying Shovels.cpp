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
int largestFactor(ll n, ll k) {
    ll ans = 1;

    for(ll i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            ll d1 = i;
            ll d2 = n / i;

            if(d1 <= k)
                ans = max(ans, d1);

            if(d2 <= k)
                ans = max(ans, d2);
        }
    }

    return ans;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    ll d = largestFactor(n, k);

    cout << n / d << '\n';
}
int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}