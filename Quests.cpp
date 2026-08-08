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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) cin >> b[i];

    ll sum = 0, maxi = 0, ans = 0;

    for(int i = 0; i < min(n, k); i++){
        sum += a[i];
        maxi = max(maxi, b[i]);
        ans = max(ans, sum + maxi*(k-i-1));
    }

    cout << ans << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}