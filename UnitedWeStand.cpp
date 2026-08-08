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
    vector<ll> a(n), b, c;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll mx = *max_element(all(a));
    for(int i = 0; i < n; i++){
        if(a[i] != mx) b.pb(a[i]);
        else c.pb(a[i]);
    }
    if(b.size() == 0){
        cout << -1 << '\n';
        return;
    }
    cout << b.size() << " " << c.size() <<'\n';
    for(auto p : b){
        cout << p << " ";
    }
    cout << '\n';
    for(auto q : c){
        cout << q << " ";
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