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
    ll n; char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s += s;
    ll ind = -1;
    ll ans = 0;
    for(int i = 2*n-1; i >=0 ;i--){
        if(s[i] == 'g') ind = i;
        if(s[i] == c){
            ll d = ind - i;
            ans = max(ans, d);
        }
    }
    cout << ans << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}