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
    vector<vector<int>> adj(n+1);

    for(int i = 1; i < n; i++){
        int u, v;
        cin >> u >> v;

        adj[u].pb(v);
        adj[v].pb(u);
    }

    vector<int> color(n+1, -1);
    color[1] = 0;
    ll cnt[2] = {0, 0};

    queue<int> q;
    q.push(1);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        cnt[color[u]]++;

        for(auto v : adj[u]){
            if(color[v] == -1){
                color[v] = 1 - color[u];
                q.push(v);
            }
        }

    }

    ll ans = cnt[0] * cnt[1] - (n-1);

    cout << ans << '\n';
}

int main() {
    fast_io;
    int t = 1;
    
    while (t--) solve();
    return 0;
}