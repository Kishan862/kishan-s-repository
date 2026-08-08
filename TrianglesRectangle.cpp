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
    long long w, h;
    cin >> w >> h;

    long long ans = 0;

    for (int side = 0; side < 4; side++) {
        int k;
        cin >> k;

        vector<long long> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }

        long long base = a.back() - a.front();

        if (side < 2) {          
            ans = max(ans, base * h);
        } else {                
            ans = max(ans, base * w);
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