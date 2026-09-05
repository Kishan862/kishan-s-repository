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
    ll n;
    cin >> n;

    vi a(n);
    vi pos;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 1)
            pos.pb(i);
    }

    int bestL = -1;
    int bestR = -1;

    if (pos.empty()) {
        int first = -1;
        int last = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] == -1) {
                if (first == -1)
                    first = i;
                last = i;
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == -1)
                a[i] = 0;
        }

        if (first != -1) {
            a[first] = 1;
            a[last] = 1;
        }
    }
    else {
        for (int i = 1; i < pos.size(); i++) {
            int L = pos[i - 1];
            int R = pos[i];

            if (bestL == -1 || R - L > bestR - bestL) {
                bestL = L;
                bestR = R;
            }
        }

        for (int i = 0; i < pos[0]; i++) {
            if (a[i] == -1) {
                int L = i;
                int R = pos[0];

                if (bestL == -1 || R - L > bestR - bestL) {
                    bestL = L;
                    bestR = R;
                }

                break;
            }
        }

        for (int i = n - 1; i > pos.back(); i--) {
            if (a[i] == -1) {
                int L = pos.back();
                int R = i;

                if (bestL == -1 || R - L > bestR - bestL) {
                    bestL = L;
                    bestR = R;
                }

                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == -1)
                a[i] = 0;
        }

        a[bestL] = 1;
        a[bestR] = 1;
    }

    for (int x : a)
        cout << x << ' ';

    cout << '\n';
}

int main() {
    fast_io;

    int t = 1;
    cin >> t;

    while (t--)
        solve();

    return 0;
}