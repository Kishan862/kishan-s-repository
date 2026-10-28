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
    ll n;
    cin >> n;

    vector<vector<char>> mat(n, vector<char>(4));
    
    for(int i = 0; i < n; i++){
        for(int j= 0; j < 4; j++){
            cin >> mat[i][j];
        }
    }

    vector<int> ans;
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < 4; j++){
            if(mat[i][j] == '#') ans.pb(j + 1);
        }
    }

    for(auto it : ans){
        cout << it << " ";
    }
    cout <<'\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}