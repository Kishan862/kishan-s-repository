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
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n), last(n, 0);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    ll all = 0, alltime = -1;
    for(int time = 1; time <= q; time++){
        ll type;
        cin >> type;

        if(type == 1){
            ll i, x;
            cin >> i >> x;
            i--;
            ll curr;
            if(last[i] > alltime) curr = a[i];
            else curr = all;

            sum -= curr;
            sum += x;
            a[i] = x;
            last[i] = time;

        }
        else{
            ll x;
            cin >> x;

            all = x;
            alltime = time;

            sum = n * x;

        }
        cout << sum << '\n';

    }

    
}

int main() {
    fast_io;
    int t = 1;
    while (t--) solve();
    return 0;
}