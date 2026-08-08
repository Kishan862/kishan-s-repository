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
int XOR(int x){
    if(x % 4 == 0) return x;
    else if(x % 4 == 1) return 1;
    else if(x % 4 == 2) return x + 1;
    return 0;
}
void solve() {
    ll a, b;
    cin >> a >> b;

    int ans = a;
    int x = XOR(a-1);

    if(x == b){
        cout << ans << '\n';
    }
    else{
        int y = x ^ b;
        if(y == a){
            cout << ans + 2 << '\n';
        }
        else{
            cout << ans + 1 << '\n';
        }
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}