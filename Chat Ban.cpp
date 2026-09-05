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
ll get(ll x){
    return((x * (x+1)) >> 1);
}
void solve() {
    ll k, x;
    cin >> k >> x;

    ll low = 1, high = (2 * k - 1);
    ll ans = high;

    bool over = false;
    while(low <= high){
        ll mid = low + ((high - low) >> 1);

        if(mid >= k){
            over = (get(k) + get(k-1) - get(2 * k - 1 - mid) >= x);
        }
        else{
            over = (get(mid) >= x);
        }

        if(over){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
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