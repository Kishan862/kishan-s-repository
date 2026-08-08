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
bool fact(int x, int y){
    for(int i = 1; i * i <= x; i++){
        if(x % i == 0){
            if(y == i){
                return true;
            }
            if(i != x/i){
                if(y == x/i){
                    return true;
                }
            }
        }
    }
    return false;
}
void solve() {
    ll x, y;
    cin >> x >> y;
    if(x == y){
        cout << "YES" << '\n';
        return;
    }
    else if(x < y){
        cout << "NO" << '\n';
        return;
    }
    bool ispossible = fact(x, y);
    if(ispossible){
        cout << "YES" << '\n';
        return;
    }
    else{
        cout << "NO" << '\n';
        return;
    }

    
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}