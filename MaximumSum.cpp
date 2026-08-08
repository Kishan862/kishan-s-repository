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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));

    vector<ll> pre(n);
    pre[0] = a[0];
    for(int i = 1; i < n; i++){
        pre[i] = pre[i-1] + a[i];
    }
    ll ans = pre[n-k-1];
    ll x = k-1;
    while(x > -1){
        int left = 2*(k-x)-1, right = n-x-1;
        ll curr = pre[right] - pre[left];
        ans = max(ans, curr);
        x--;
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