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
    ll n;
    cin >> n;
    vector<ll> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];
    vector<ll> ans;
    ans.pb(b[0]);
    for(int i = 1; i < n; i++){
        if(b[i] >= b[i-1]){
            ans.pb(b[i]);
        }
        else{
            ans.pb(b[i]);
            ans.pb(b[i]);
        }
    }
    cout << ans.size() << '\n';
    for(auto x : ans){
        cout << x << " "; 
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