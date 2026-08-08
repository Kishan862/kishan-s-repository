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
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(x <= q) arr[i] = 1;
        else arr[i] = 0;
    }
    ll consecutive_days = 0;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]) {
            consecutive_days++;
        }
        else{
            if(consecutive_days >= k){
                ll diff = consecutive_days - k + 1;
                cnt += (diff * (diff + 1)) / 2;
                
            }
            consecutive_days = 0;
        }
    }
    if(consecutive_days >= k){
        ll diff = consecutive_days - k + 1;
        cnt += (diff * (diff + 1)) / 2;          
    }

    cout << cnt << endl;
    
   
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}