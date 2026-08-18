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
    ll n, m;
    cin >> n >> m;

    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vi rem(m);

    for(auto x : a){
        rem[x % m]++;
    }

    ll ans = rem[0] == 0 ? 0 : 1;

    int l = 1, r = m-1;
    while(l < r){
        if(rem[l] == 0 && rem[r] == 0) {
            l++;
            r--;
            continue;
        }
        ll d = abs(rem[l] - rem[r]);
        if(d <= 1) ans += 1;
        else ans += d;

        l++;
        r--;
    }
    if(m % 2 == 0){
        ans += (rem[m/2] == 0 ? 0 : 1);
    }
    
    cout << ans << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}