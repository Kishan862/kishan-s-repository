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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define pb push_back
#define eb emplace_back

#define ff first
#define ss second

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vll = vector<ll>;

void solve() {
    ll n, k;
    cin >> n >> k;

    if((k < n )|| (k == 2 * n)){
        cout << -1 << '\n';
        return;
    }
    
    k = 2 * n - 1 - k;

    vector<vector<int>> matrix(n, vector<int>(n));

    int x = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix[i][j] = x;
            x++;
        }
    }

    for(int i = 1; i <= k; i++){
        swap(matrix[0][i], matrix[i][i]);
    }

    for(auto row : matrix){
        for(auto x : row){
            cout << x << " ";
        }
        cout << '\n';
    }
    
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}