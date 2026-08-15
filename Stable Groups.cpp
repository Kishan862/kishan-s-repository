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
    ll n, k, x;
    cin >> n >> k >> x;
    vll a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));

    ll splits = 0;
    vll gaps;
    for(int i = 1; i < n; i++){
        ll diff = a[i] - a[i-1];
        if(diff > x){
            splits++;
            gaps.pb(diff);
        }
    }
    sort(all(gaps));

    for(auto gap : gaps){
        ll neededStudents = ((gap + x - 1) / x) - 1;

        if(neededStudents > k) break;

        k -= neededStudents;
        splits--;
        
    }

    ll ans = splits + 1;

    cout << ans << '\n';
    
}

int main() {
    fast_io;
    int t = 1;
    while (t--) solve();
    return 0;
}