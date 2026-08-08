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
bool check(ll x, ll h, vector<ll>& a){
    ll unitsOfWaterUsed = 0;
    for(auto it : a){
        if(h <= it) return (unitsOfWaterUsed <= x);
        if(unitsOfWaterUsed >= x) return false;
        unitsOfWaterUsed += (h - it);
    }
    return (unitsOfWaterUsed <= x);

}
void solve() {
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n == 1){
        cout << x + a[0] << '\n';
        return;
    }
    sort(all(a));
    ll low = 1, high = 1e10;
    ll ans = 0;
    while(high >= low){
        ll mid = low + (high - low) / 2;
        if(check(x, mid, a)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
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