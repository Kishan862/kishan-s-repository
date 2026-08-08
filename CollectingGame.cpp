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
    vector<pair<ll, ll>> a(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    sort(all(a));
    vector<ll> prefixSum(n);
    prefixSum[0] = a[0].first;
    for(int i = 1; i < n; i++){ 
        prefixSum[i] = a[i].first + prefixSum[i-1];
    }
   
    vector<ll> dp(n);

    dp[n-1] = n-1;

    for(int i = n-2; i >= 0; i--){
        if(prefixSum[i] >= a[i+1].first) dp[i] = dp[i+1];
        else dp[i] = i;
    }

    vector<ll> ans(n);

    for(int i = 0; i < n; i++){
        ans[a[i].second] = dp[i];
    }
    for(auto it : ans){
        cout << it << " ";
    }
    cout << '\n';
    

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}