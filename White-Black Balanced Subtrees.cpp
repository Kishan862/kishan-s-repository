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
int ans;

int dfs(int u, vector<vector<int>>& tree, string& s) {

    int sum = (s[u - 1] == 'W' ? 1 : -1);

    for(int child : tree[u]) {
        sum += dfs(child, tree, s);
    }

    if(sum == 0)
        ans++;

    return sum;
}
void solve() {

    int n;
    cin >> n;

    vector<vector<int>> tree(n + 1);

    for(int i = 2; i <= n; i++) {
        int parent;
        cin >> parent;

        tree[parent].push_back(i);
    }

    string s;
    cin >> s;

    ans = 0;

    dfs(1, tree, s);

    cout << ans << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}