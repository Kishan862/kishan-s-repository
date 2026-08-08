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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll d = s - (k * b);
    ll max_d = n * (k - 1);
    if( d >= 0 && d <= max_d){
        cout<< (k * b) + (d % (k-1)) <<" ";
        ll t = d / (k-1);
        ll l = n - t - 2;
        while(t--){
            cout<< k-1 <<" ";
        }
        while(l--){
            cout<< 0 << " ";
        }
        cout << endl;
        
    }
    else{
        cout << -1 <<endl;
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}