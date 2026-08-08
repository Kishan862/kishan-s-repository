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
ll gcd(ll a, ll b){
    if(a == 0){
        return b;
    }
    return(b, a % b);
}
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll ans = -1;
    for(int i = n-1; i > 0; i--){
        for(int j = i-1; j >= 0; j--){
            if((a[j] % a[i] != 0 )|| (a[j] % 2 != 0 && a[i] % 2 != 0))
                if(gcd(a[i], a[j]) == 1){
                    ans = i+j+2;
                    cout << ans << '\n';
                    return;
                }
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