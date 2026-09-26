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
    int n, x;
    cin >> n >> x;

    vi a(n);
    for(auto &x : a) cin >> x;

    vi primes;
    int temp = x;
    for(int i = 2; i * i <= temp; i++){
        if(temp % i == 0){
            primes.pb(i);

            while(temp % i == 0){
                temp /= i;
            }
        }
    }
    if(temp > 1) primes.pb(temp);
    ll ans = 0;
    for(auto p : primes){
        ll sum = 0;
        for(auto x : a){
            if(x % p == 0) sum += x;
        }
        ans = max(ans, sum);
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