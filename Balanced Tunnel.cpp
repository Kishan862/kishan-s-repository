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
    vll a(n), b(n), c(n), pos(n);

    for(auto &x : a){
        cin >> x;
        x--;
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
        b[i]--;
        pos[b[i]] = i;
    }

    for(int i = 0; i < n; i++){
        c[i] = pos[a[i]];
    }
    int mx = -1, ans = 0;
    for(int i = 0; i < n; i++){
        if(c[i] > mx){
            mx = c[i];
        }
        else{
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    fast_io;
    int t = 1;
   
    while (t--) solve();
    return 0;
}