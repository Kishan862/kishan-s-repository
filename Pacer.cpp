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

    vector<pair<ll, ll>> ab;

    for(int i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;

        ab.pb({x, y});
    }


    ll ans = 0;

    if(ab[0].first & 1){
        if(ab[0].second){
            ans += ab[0].first;
        }
        else{
            ans += (ab[0].first - 1);
        }
    }
    else{
        if(ab[0].second){
            ans += (ab[0].first - 1);
        }
        else{
            ans += (ab[0].first);
        }

    }
    for(int i = 1; i < n; i++){
        ll prev = ab[i-1].second;
        ll curr = ab[i].second;

        ll d = ab[i].first - ab[i-1].first;

        if(d & 1){
            if(prev == curr) ans += (d - 1);
            else ans += d;
        }
        else{
            if(prev == curr) ans += d;
            else ans += (d - 1);
        }
    }

    ll last = ab.back().first;
    if(last < m) ans += (m - last);

    cout << ans << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}