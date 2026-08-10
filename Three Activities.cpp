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
    ll n;
    cin >> n;
    
    vector<pair<ll ,ll>> a(n), b(n), c(n);

    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        a[i] = {x, i};
    }
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        b[i] = {x, i};
    }
   for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        c[i] = {x, i};
    }

    sort(a.begin(), a.end(), [](auto &x, auto &y){
    return x.first > y.first; });

    sort(b.begin(), b.end(), [](auto &x, auto &y){
    return x.first > y.first; });

    sort(c.begin(), c.end(), [](auto &x, auto &y){
    return x.first > y.first; });
    
    ll ans = 0;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){

                int x = a[i].second, y = b[j].second, z = c[k].second;
                if(x == y || y == z || x == z) continue;

                ll m = a[i].first + b[j].first + c[k].first;
                ans = max(ans, m);

            }
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