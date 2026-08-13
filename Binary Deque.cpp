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
    ll n, s;
    cin >> n >> s;
    vll a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    ll sum = accumulate(all(a), 0LL);

    if(sum == s){
        cout << 0 << '\n';
        return;
    }

    if(s > sum){
        cout << -1 << '\n';
        return;
    }

    ll curr = 0;
    ll l = 0, maxlen = 0;
    for(int r = 0; r < n; r++){
        curr += a[r];

        while(curr > s){
            curr -= a[l];
            l++;
        }

        if(s == curr) maxlen = max(maxlen, r - l + 1);
    }

    cout << n - maxlen << '\n';
    



}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}