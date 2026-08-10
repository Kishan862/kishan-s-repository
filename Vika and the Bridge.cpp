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
    ll n, k;
    cin >> n >> k;
    
    vi last(k + 1, 0), max1(k + 1, 0), max2(k + 1, 0);

    for(int i = 1; i <= n; i++){
        int c;
        cin >> c;
        int gap = i - last[c] - 1;

        if(gap > max1[c]){
            max2[c] = max1[c];
            max1[c] = gap;
        }
        else if(gap > max2[c]){
            max2[c] = gap;
        }

        last[c] = i;
    }

    for(int c = 1; c <= k; c++){
        int gap = n - last[c];
        if(gap > max1[c]){
            max2[c] = max1[c];
            max1[c] = gap;
        }
        else if(gap > max2[c]){
            max2[c] = gap;
        }

    }

    int ans = n;
    for(int c = 1; c <= k; c++){
        int curr = max(max1[c]/2, max2[c]);
        ans = min(ans, curr);
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