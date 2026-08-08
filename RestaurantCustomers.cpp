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
    vector<pair<ll, ll>> events;
    for(int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        events.pb({a, 1});
        events.pb({b, -1});
    }
    sort(all(events));
    ll current = 0, ans = 0;
    for(auto event : events){
        current += event.second;
        ans = max(current, ans);
    }
    cout << ans << '\n';
}

int main() {
    fast_io;
    solve();
    return 0;
}