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
    int n, k;
    cin >> n >> k;

    vector<int> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pref[i] = (pref[i - 1] + x) % k;
    }

    vector<int> freq(k, 0);
    ll ans = 0;

    for (int i = 0; i <= n; i++) {
        int j = i - k - 1;

        if (j >= 0) {
            freq[pref[j]]++;
        }

        ans += freq[pref[i]];
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}