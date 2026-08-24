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
#include <iomanip>

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
    ll n, k;
    cin >> n >> k;

    vll a(n);
    ll sum = 0, sm = 0;
    int l = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sm += a[i];

        while((i-l+1) > k){
            sm -= a[l];
            l++;
        }

        if((i-l+1) == k){
            sum += sm;
        }
        
    }

    ld ans = (ld)sum / (n-k+1);
   
    cout << fixed << setprecision(10) << ans << '\n';
   
}

int main() {
    fast_io;
    int t = 1;
    while (t--) solve();
    return 0;
}