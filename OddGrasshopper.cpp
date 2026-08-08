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
    ll x, n;
    cin >> x >> n;
    if(x & 1){
        if(n % 4 == 0){
            cout << x << '\n';
            return;
        }
        else if(n % 4 == 1){
            cout << x  + n << '\n';
            return;
        }
        else if(n % 4 == 2){
            cout << x - 1 << '\n';
            return;
        }
        else{
            cout << x - n - 1 << '\n';
            return;
        }
    }
    else{
        if(n % 4 == 0){
            cout << x << '\n';
            return;
        }
        else if(n % 4 == 1){
            cout << x  - n << '\n';
            return;
        }
        else if(n % 4 == 2){
            cout << x + 1 << '\n';
            return;
        }
        else{
            cout << x + n + 1 << '\n';
            return;
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