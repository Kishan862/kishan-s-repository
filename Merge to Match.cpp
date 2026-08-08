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
    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < m; ++i) cin >> b[i];

    if (n < 2 * m) {
        cout << "NO\n";
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

        bool ok = (n >= 2 * m);

        for (int i = 0; i < m && ok; i++) {
            if (b[i] < a[i] || b[i] > a[n - m + i]) {
                ok = false;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}