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

    vi taken(n * 2 + 1, 0), ans(n * 2 + 1, 0);
    vector<vector<int>> grid(n+1, vector<int>(n + 1, 0));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> grid[i][j];

            if(!taken[grid[i][j]]){
                ans[i + j] = grid[i][j];
                taken[grid[i][j]] = 1;
            }
            
        }
    }

    int missing = -1;
    for(int i = 1; i < taken.size(); i++){
        if(!taken[i]) missing = i;
    }

    ans[1] = missing;

    for(int i = 1; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}