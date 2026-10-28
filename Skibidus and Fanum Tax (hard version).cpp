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
    ll n, m;
    cin >> n >> m;

    vll a(n), b(m);

    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    sort(all(b));
    ll prev = LLONG_MIN;
    bool isPossible = true;
    
    for(int i = 0; i < n; i++){
        ll best = LLONG_MAX;
        if(a[i] >= prev){
            best = a[i];
        }

        ll req = prev + a[i];
        auto it = lower_bound(all(b), req);

        if(it != b.end()){
            ll tranformed = *it - a[i];
            best = min(best, tranformed);
        }


        if(best == LLONG_MAX){
            isPossible = false;
            break;
        }

        prev = best;
         
    }

    cout << (isPossible ? "YES" : "NO") << '\n';

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}