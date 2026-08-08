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
    vector<int> a(n), ans;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x = a[0], cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == x) cnt++;
    }
    if(cnt == n){
        cout << "NO" << '\n';
        return;
    }
    sort(all(a));
    int l = 0, r = n-1;
    while (l <= r){
        if(l == r){
            ans.pb(a[l]);
        }
        else{
            ans.pb(a[l]);
            ans.pb(a[r]);
        }
        l++;
        r--;
    }
    cout << "YES" << '\n';
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