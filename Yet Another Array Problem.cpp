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
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void solve() {
    ll n;
    cin >> n;
    
    vll a(n);
    for(auto &x : a) cin >> x;

    long long g = 0;

    for (long long x : a) {
        g = gcd(g, x);
    }

    for (long long p = 2; ; p++) {
        bool prime = true;

        for (long long d = 2; d * d <= p; d++) {
            if (p % d == 0) {
                prime = false;
                break;
            }
        }

        if (prime && g % p != 0) {
            cout << p << '\n';
            break;
        }
    }


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}