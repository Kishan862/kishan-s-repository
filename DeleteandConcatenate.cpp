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
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    int cntPos = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = x-c;
        if(a[i] > 0) cntPos++;
    }
    sort(a.begin(), a.end(), greater<ll>());
    int m = (n+1)/2;
    int k = max(m, cntPos);

    ll score = 0;
    for(int i = 0; i < k; i++) score += a[i];

    cout << score << '\n';
    
    
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}