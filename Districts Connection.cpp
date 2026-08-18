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
    vi a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int gang_1 = a[0];
    vi gang_x_districts;
    vi gang_1_districts;

    for(int i = 0; i < n; i++){
        if(a[i] != gang_1){
            gang_x_districts.pb(i+1);
        }
        else{
            gang_1_districts.pb(i+1);
        }
    }
    int x = gang_1_districts.size();
    int y = gang_x_districts.size();
    
    if(x == n || y == n){
        cout << "NO" << '\n';
    }
    else{
        cout << "YES" << '\n';
        for(int i = 0; i < y; i++){
            cout << gang_1_districts[0] << " " << gang_x_districts[i] << '\n';
        }
        for(int i = 1; i < x; i++){
            cout << gang_x_districts[0] << " " << gang_1_districts[i] << '\n';
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