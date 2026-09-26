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

    vi a(n + 1);
    vi pos(n + 2);

    for(int i = 1; i < n+1; i++){
        cin >> a[i];
        pos[a[i]] = i % 2;
    }

    int diff = 0;
    for(int i = n; i >= 1; i--){

        if(pos[i]){
            diff--;
        }
        else{
            diff++;
        }

        if(abs(diff) > 1){
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}