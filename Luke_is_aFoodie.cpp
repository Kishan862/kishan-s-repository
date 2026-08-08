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
    ll n, x;
    cin >> n >> x;
    ll cnt = 0;
    ll y; cin >> y;
    ll l_pre = y-x, u_pre = y+x;
    for(ll i = 1; i < n; i++){
        ll y; cin >> y;
        ll l_curr = y-x, u_curr = y+x;
        if(max(l_pre, l_curr) > min(u_pre, u_curr)){
            cnt++;
            l_pre = l_curr;
            u_pre = u_curr;
        }
        else{
            l_pre = max(l_pre, l_curr);
            u_pre = min(u_curr, u_pre);
        }
        
    }
    cout << cnt <<endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}