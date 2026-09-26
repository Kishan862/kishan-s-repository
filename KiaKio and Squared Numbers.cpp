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
int sumSquareDigits(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }

    return sum;
}

int isHappy(int n) {
    set<int> seen;

    while (n != 1) {
        if (seen.count(n))
            return n;

        seen.insert(n);
        n = sumSquareDigits(n);
    }

    return 1;
}
void solve() {
    ll n;
    cin >> n;

    vi a(n);
    map<ll, ll> frq;
    for(auto &x : a){
        cin >> x;
        int y = isHappy(x);
        frq[y]++;

    }
    ll ans = 0;
    for(auto it : frq){
        ll x = it.second;
        ll pairs =( x * (x - 1)) / 2;
        ans = max(ans, pairs);

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