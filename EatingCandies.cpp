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
    ll n;
    cin >> n;
    vector<ll> weights(n);
    for(int i = 0; i < n; i++){
        cin >> weights[i];
    }
    ll l = 0, r = n-1;
    ll LSum = 0, RSum = 0;
    ll ans  = 0;
    while(l <= r){
        if(LSum <= RSum){
            LSum += weights[l++];
        }
        else{
            RSum += weights[r--];
        }
        if(LSum == RSum){
            ans = l + n - 1 - r;
        }
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