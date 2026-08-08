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
    ll a, b;
    cin >> a >> b;
    
    int ans = INT_MAX;

    for(int add = 0; add < 32; add++){
        int op = add;
        int newB = b + add;
        if(newB == 1) continue;
        int a1 = a;
        while(a1 > 0){
            a1 /= newB;
            op++;
        }

        ans = min(ans, op);
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