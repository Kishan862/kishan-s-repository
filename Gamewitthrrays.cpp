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
#include <climits>
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
    ll n;
    cin >> n;
    vector<int> sec_min;
    int min_first_min = INT_MAX;
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        vector<int> a(m);
        for(int j = 0; j < m; j++){
            cin >> a[j];
        }
    
        sort(all(a));
        sec_min.pb(a[1]);
        min_first_min = min(min_first_min, a[0]);
    }

    sort(all(sec_min));
    ll total_sec_min = 0;
    for(auto x : sec_min) total_sec_min += x;

    ll lowest_sec_min = sec_min[0];
    ll answer = min_first_min + total_sec_min - lowest_sec_min;

    cout << answer << '\n';

    

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}