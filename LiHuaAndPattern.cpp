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
    
    vector<vector<ll>> a(n, vector<ll>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    ll changes = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[n-i-1][n-j-1]) changes++;
        }
    }
    changes /= 2;

    if(changes > k){
        cout << "NO" << '\n';
    }
    else{
        ll left = k - changes;
        if(left % 2 == 0){
            cout << "YES" << '\n';
        }
        else{
            if(n % 2 == 0){
                cout << "NO" << '\n';
            }
            else{
                cout << "YES" << '\n';
            }
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