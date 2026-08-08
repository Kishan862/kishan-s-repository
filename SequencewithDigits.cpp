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
vector<int> minMax(ll n){
    int mn = 10, mx = -1;
    while(n){
        int dig = n % 10;
        mn = min(mn, dig);
        mx = max(mx, dig);
        n /= 10;
    }
    return {mn, mx};
}
void solve() {
    ll a, k;
    cin >> a >> k;
    k--;
    while(k--){
        vector<int> temp = minMax(a);
        if(temp[0] == 0){
            cout << a << '\n';
            return;
        }
        a = a + temp[0] * temp[1];
    }
    cout << a << '\n';

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}