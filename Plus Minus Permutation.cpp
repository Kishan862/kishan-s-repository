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
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;

    ll lcm_xy = x / gcd(x, y) * y;

    ll both = n / lcm_xy;

    ll plusCnt = n / x - both;
    ll minusCnt = n / y - both;

    ll plus = plusCnt * (2 * n - plusCnt + 1) / 2;
    ll minus = minusCnt * (minusCnt + 1) / 2;

    cout << plus - minus << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}