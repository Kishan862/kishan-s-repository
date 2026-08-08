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
    string s;
    cin >> s;
    set<char> st1;
    vector<ll> pre(n+1, 0);
    vector<ll> suf(n+1, 0);
    for(int i = 1; i <= n; i++){
        st1.insert(s[i-1]);
        pre[i] = st1.size(); 
    }
    st1.clear();
    for(int i = n; i >= 1; i--){
        st1.insert(s[i-1]);
        suf[i] = st1.size();
    }
    ll ans = -1;
    for(int i = 0; i < n; i++){
        ans = max(ans, pre[i]+suf[i+1]);
    }
    cout << ans << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}