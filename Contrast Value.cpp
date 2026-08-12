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
    vll a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(n == 1){
        cout << 1 << '\n';
        return;
    }

    vll ans;
    ans.pb(a[0]);
    ans.pb(a[1]);

    for(int i = 2; i < n; i++){
        ll currSize = ans.size();

        ll x = ans[currSize-2] - ans[currSize-1];
        ll y = ans[currSize-1] - a[i];

        if(x  > 0){
            if(y > 0){
                ans[currSize - 1] = a[i];

            } else if(y < 0){
                ans.pb(a[i]);
            }
        } else{
            if(y < 0){
                ans[currSize - 1] = a[i];
            } else if(y > 0){
                ans.pb(a[i]);
            }
        }
        
    }
    int finalSize = ans.size();
    if (ans[0] == ans[1])
		finalSize--;

	cout << finalSize << "\n";

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}