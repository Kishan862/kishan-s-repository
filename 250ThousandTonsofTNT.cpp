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
void fact(int n, vector<ll>& factors){
    factors.pb(1);
    for(int x = 2; x * x <= n; x++){
        if(n % x == 0){
            factors.pb(x);
            if(x != n/x) factors.pb(n/x);
        }
    }


}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }

    if(n == 1){
        cout << 0 << '\n';
        return;
    }
    
    vector<ll> factors;
    fact(n, factors);
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    if(factors.size() == 1){
        
        for(auto it : a){
            mx = max(mx, it);
            mn = min(mn, it);
        }

        cout << mx - mn << '\n';
        return;
    }
    for(auto it : a){
        mx = max(mx, it);
        mn = min(mn, it);
    }
    ll maxDiff = mx - mn;
    mn = LLONG_MAX;
    mx = LLONG_MIN;

    for(int i = 1; i < factors.size(); i++){
        mn = LLONG_MAX;
        mx = LLONG_MIN;
        int k = factors[i];
        for(int i = 0; i < n; i+= k){
            ll sum = 0;
            for(int j = i; j < i+k; j++){
                sum += a[j];
            }
            mn = min(mn, sum);
            mx = max(mx, sum);
        }
        maxDiff = max(maxDiff, mx-mn);
    }

    cout << maxDiff << '\n';

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}