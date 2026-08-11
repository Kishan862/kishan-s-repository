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
ll binarySearch(ll n, ll x, vll &pmax){
    ll low = 0, high = n-1;
    ll ans = -1;
    while(low <= high){
        ll mid = low + ((high - low) >> 1);
        
        if(pmax[mid] <= x){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}
void solve() {
    ll n, q;
    cin >> n >> q;
    vll steps(n);

    for(int i = 0; i < n; i++){
        cin >> steps[i];
    }

    vll psum(n), pmax(n);
    psum[0] = steps[0];
    pmax[0] = steps[0];

    for(int i = 1; i < n; i++){
        psum[i] = steps[i] + psum[i-1];
        pmax[i] = max(steps[i], pmax[i-1]);
    }

    for(int i = 0; i < q; i++){
        ll x;
        cin >> x;
        ll ind = binarySearch(n, x, pmax);
        if(ind == -1){
            cout << 0 << " ";
        }
        else{
            cout << psum[ind] << " ";
        }
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