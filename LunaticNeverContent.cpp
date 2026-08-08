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
    if(b == 0) return a;
    return gcd(b, a%b);
}
bool isPalindrome(vector<ll> a){
    ll l = 0, r = a.size()-1;
    while(r > l){
        if(a[r] != a[l]) return false;
        l++;
        r--;
    }
    return true;
}
void solve() {
    ll n;
    cin >> n;
    
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(isPalindrome(a)){
        cout << 0 << '\n';
        return;
    }

    ll ans = gcd(abs(a[0]-a[n-1]), abs(a[1]-a[n-2]));
    ll l = 2, r = n-3;
    while(r > l){
        ans = gcd(ans, abs(a[r]-a[l]));
        r--;
        l++;
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