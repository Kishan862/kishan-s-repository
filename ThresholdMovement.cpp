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
#define all(x) (x).begin(), (x).end();

void solve() {
    int n;
    cin >> n;
    vector<long long> w(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    long long min_odd = 2e18; 
    long long max_even = -2e18; 
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) { 
            min_odd = min(min_odd, w[i]);
        } else {          
            max_even = max(max_even, w[i]);
        }
    }
    
    if (min_odd - max_even >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}