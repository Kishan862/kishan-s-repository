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
    ll n, l, r;
    cin >> n >> l >> r;

    vector<int> ans;
    for(int i = 1; i <= n; i++){
        int temp = ((l + i - 1) / i) * i;
        if(temp > r){
            cout << "NO" << '\n';
            return;
        }

        ans.pb(temp);

    }
        
        

        
   
    cout << "YES" << '\n';
    for(auto x : ans){
        cout << x << " ";
    }
    cout << '\n';



}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}