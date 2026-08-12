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
    vector<string> grid(n);

    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    int ans = 0;

    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < (n+1)/2; j++){
            int one = 0;

            one += grid[i][j] - '0';
            one += grid[j][n-1-i] - '0';
            one += grid[n-1-i][n-j-1] - '0';
            one += grid[n-1-j][i] - '0';

            ans += min(one, 4-one);
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