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
    ll n, x;
    cin >> n >> x;
    vector<int> weights(n);
    for(int i = 0; i < n; i++) cin >> weights[i];
    sort(all(weights));
    int l = 0, r = n-1;
    int ans = 0;
    while (r >= l){
        if(weights[r] + weights[l] <= x){
            r--;
            l++;
        }
        else{
            r--;
        }
        ans++;
        
    }
    cout << ans << '\n';
    
}

int main() {
    fast_io;
    int t = 1;
    while (t--) solve();
    return 0;
}