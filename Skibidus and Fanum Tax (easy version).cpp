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
bool fun(ll i, ll prev, ll b, vector<ll> &a){
    if(i == a.size()) return true;

    ll x = a[i];
    ll y = b - a[i];

    if(x >= prev && fun(i + 1, x, b, a)) return true;

    if(y >= prev && fun(i + 1, y, b, a)) return true;

    return false;

}
void solve() {
    ll n, m;
    cin >> n >> m;

    vll a(n), b(m);

    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    ll prev = LLONG_MIN;
    bool isPossible = true;

    for(int i = 0; i < n; i++){

        ll x = a[i];
        ll y = b[0] - a[i];

        ll best = LLONG_MAX;

        if(x >= prev){
            best = min(best, x);
        }

        if(y >= prev){
            best = min(best, y);
        }

        if(best == LLONG_MAX){
            isPossible = false;
            break;
        }

        prev = best;
    }

    ll isPossible = fun(0, LLONG_MIN, b[0], a);





    cout << (isPossible ? "YES" : "NO") << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}