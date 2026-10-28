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
    string p, s;
    cin >> p >> s;

    int n = p.size(), m = s.size();
    int i = 0, j = 0;

    while (i < n && j < m) {
        int cntP = 0;
        char chP = p[i];

        while (i < n && p[i] == chP) {
            i++;
            cntP++;
        }

        int cntS = 0;
        char chS = s[j];

        if (chS != chP) {
            cout << "NO\n";
            return;
        }

        while (j < m && s[j] == chS) {
            j++;
            cntS++;
        }

        if (cntS < cntP || cntS > 2 * cntP) {
            cout << "NO\n";
            return;
        }
    }

    if (i == n && j == m)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}