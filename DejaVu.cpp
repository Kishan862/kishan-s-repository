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
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), x(q);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < q; i++) cin >> x[i];
    int prev = 31;
    for(int i = 0; i < q; i++){
        if(x[i] >= prev) continue;
        ll val = 1 << (x[i]);
        for(int j = 0; j < n; j++){
            if(a[j] % val == 0) a[j] += (val)/2;
        }
        prev = x[i];
    }

    for(auto it : a){
        cout << it << " ";
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