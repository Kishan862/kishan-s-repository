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
    ll a , b, c;
    cin >> a >> b >> c;
    if(a == b || b == c || a == c){
        cout << 0 << '\n';
        return;
    }
    int mn = min({a, b, c});

    int mx = max({a, b , c});
    
    int inter = -1;
    if((mn == a && mx == b) || (mx == a && mn == b)) inter = c;
    else if((mn == a && mx == c) || (mx == a && mn == c))  inter = b;
    else inter = a;

    int ans = min((mx-inter), (inter-mn));
    cout << ans << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}