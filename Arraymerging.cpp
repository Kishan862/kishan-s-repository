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
    vector<int> a(n), b(n), c;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) cin >> b[i];

    sort(all(a));
    sort(all(b));

    int t1 = 0, t2 = 0;
    while(t1 < n && t2 < n){
        if(a[t1] >= b[t2]){
            c.pb(b[t2]);
            t2++;
        }
        else if(a[t1] < b[t2]){
            c.pb(a[t1]);
            t1++;
        }
    }
    if(t1 < n) c.pb(a[t1]);
    if(t2  < n) c.pb(b[t2]);
    
    int m = c.size();
    int len = 1, maxLen = 1;

    for(int i = 1; i < m; i++){
        if(c[i-1] == c[i]){
           len++;
        }
        else{
            maxLen = max(maxLen, len);
            len = 1;
        }
        
    }
    maxLen = max(maxLen, len);
    cout << maxLen << '\n';

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}