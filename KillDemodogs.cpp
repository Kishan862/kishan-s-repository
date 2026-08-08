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
    const long long MOD = 1e9 + 7;
    const long long inv6 = 166666668;

    long long ans = n % MOD;
    ans = ans * ((n + 1) % MOD) % MOD;
    ans = ans * ((4 * (n % MOD) - 1 + MOD) % MOD) % MOD; 
    ans = ans * 2022 % MOD;
    ans = ans * inv6 % MOD;

    cout << ans << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}