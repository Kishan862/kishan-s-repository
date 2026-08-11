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
    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> cards(n, vector<ll>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> cards[i][j];
        }
    }

    ll ans = 0;
    for(int i = 0; i < m; i++){
        vector<ll> temp(n);
        ll sum = 0;

        for(int j = 0; j < n; j++){
           temp[j] = cards[j][i];
           sum += temp[j];
        }

        sort(all(temp));
        ll a = n-1;

        for(int k = 0; k < n-1; k++){
            sum -= temp[k];
            ans += (sum - a * temp[k]);
            a--;
        }
    }

    cout << ans << '\n';
}
int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}