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
bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void solve() {
    ll n, p;
    cin >> n >> p;

    vector<ll> arr(n), brr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) cin >> brr[i];

    vector<pair<ll,ll>> crr;
    for(int i = 0; i < n; i++) {
        crr.pb({arr[i], brr[i]});
    }

    sort(crr.begin(), crr.end(), cmp);

    ll cost = p;
    ll left_residents = n - 1;

    for(int i = 0; i < n; i++) {
        if(left_residents == 0) break;

        ll a = min(left_residents, crr[i].first);
        ll b = min(p, crr[i].second);

        cost += a * b;
        left_residents -= a;
    }

    cout << cost << endl;
}
int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}