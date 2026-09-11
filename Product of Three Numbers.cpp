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
    int n;
    cin >> n;

    vector<int> factors;

    for (int i = 2; i * i <= n; i++) {
        if (n % i != 0) continue;

        factors.push_back(i);
        n /= i;

        if (factors.size() == 2)
            break;
    }

    if (n == 1 || factors.size() < 2 ||
        n == factors[0] || n == factors[1]) {
        cout << "NO" << '\n';
    } 
    else {
        cout << "YES" << '\n';
        cout << factors[0] << " " << factors[1] << " " << n << "\n";
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}