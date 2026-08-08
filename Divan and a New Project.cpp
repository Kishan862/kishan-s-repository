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

    vector<pair<ll, ll>> a(n);
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        a[i] = {x, i};
    }
    stable_sort(all(a), [](const auto &p, const auto &q) {
    return p.first > q.first;
    });

    vector<ll> coordinates, ans(n+1);
    for(int i = 1; i <= n/2; i++){
        coordinates.pb(-i);
        coordinates.pb(i);
    }
    if(n & 1) coordinates.pb(-(n/2 + 1));

    ll minTime = 0;
    ans[0] = 0;

    for(int i = 0; i < n; i++){
        minTime += 2 * abs(coordinates[i]) * a[i].first;
        ans[a[i].second + 1] = coordinates[i];
    }

    cout << minTime << '\n';
    for(auto el : ans){
        cout << el << " ";
    }
    cout << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}