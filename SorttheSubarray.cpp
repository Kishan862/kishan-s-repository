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
    
    vector<ll> a(n), a1(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> a1[i];

    int l = -1;
    for(int i = 0; i < n; i++){
        if(a[i] != a1[i]){
            l = i;
            break;
        }
    }
    if(l == -1){
        cout << 1 << " " << n << '\n';
        return;
    }
    int r;
    for(int i = n-1; i >= 0; i--){
        if(a[i] != a1[i]){
            r = i;
            break;
        }
    }
    while (l > 0 && a[l - 1] <= a1[l]) {
         l--;
    }

    while (r + 1 < n && a[r + 1] >= a[r]) {
        r++;
    }

    cout << l + 1 << " " << r + 1 << '\n';

   


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}