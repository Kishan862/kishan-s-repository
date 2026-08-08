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
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if(2*k > n){
        cout << -1 << '\n';
        return;
    }

    int ans = 0;
    for(int i = 0; i < k; i++){
        if(s[i] != 'R') ans++;
    }
    for(int i = n-k; i < n; i++){
        if(s[i] != 'L') ans++;
    }
    
    cout << ans <<'\n';


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}