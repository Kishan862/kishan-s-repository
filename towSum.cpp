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
    ll n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int rem = x - a[i];
        if(mp.find(rem) != mp.end()){
            cout << mp[rem] + 1 << " " << i + 1 << '\n';
            return;
        }
        mp[a[i]] = i;
    }

    cout << "IMPOSSIBLE" << '\n';
}

int main() {
    fast_io;
    int t = 1;
    while (t--) solve();
    return 0;
}