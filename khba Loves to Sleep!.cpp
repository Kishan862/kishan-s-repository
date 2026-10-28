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
bool check(ll M, vll &a, ll n, ll x, ll k) {
    ll total = 0;

    ll left = 0;
    ll right = a[0] - M;

    if (left <= right)
        total += right - left + 1;

    for (int i = 1; i < n; i++) {
        left = max(0LL, a[i - 1] + M);
        right = min(x, a[i] - M);

        if (left <= right)
            total += right - left + 1;
    }

    left = a[n - 1] + M;
    right = x;

    if (left <= right)
        total += right - left + 1;

    return total >= k;
}

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;

    vll a(n);
    for (auto &v : a)
        cin >> v;

    sort(a.begin(), a.end());

    ll l = 0, r = x + 1;

    while (l + 1 < r) {
        ll m = l + (r - l) / 2;

        if (check(m, a, n, x, k))
            l = m;
        else
            r = m;
    }

    ll M = l;
    ll printed = 0;
    ll nextPos = 0;

    for (int i = 0; i <= n && printed < k; i++) {
        ll left, right;

        if (i == 0) {
            left = 0;
            right = a[0] - M;
        }
        else if (i == n) {
            left = a[n - 1] + M;
            right = x;
        }
        else {
            left = a[i - 1] + M;
            right = a[i] - M;
        }

        left = max(left, nextPos);

        for (ll pos = left; pos <= right && printed < k; pos++) {
            cout << pos << " ";
            printed++;
            nextPos = pos + 1;
        }
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}