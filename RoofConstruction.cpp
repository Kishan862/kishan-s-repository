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
    n--;
    ll msb = log2(n);
    vector<ll> ans;
    ll num = pow(2, msb) - 1;
    while(num >= 0){
        ans.pb(num);
        num--;
    }
    num = pow(2, msb);
    while(num <= n){
        ans.pb(num);
        num++;
    }
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}