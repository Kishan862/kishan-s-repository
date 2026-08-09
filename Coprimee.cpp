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
vector<pair<int, int>> coPrimePairs;
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
void generatePairs(){
    for(int i = 1; i <= 1000; i++){
        for(int j = 1; j <= 1000; j++){
            if(gcd(i, j) == 1) coPrimePairs.pb({i, j});
        }
    }
}
void solve() {
    ll n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    map<int, int> mp;
    for(int i = n - 1; i >= 0; i--){
        if(!(mp.find(a[i]) != mp.end())){
            mp[a[i]] = i + 1;
        }
    }

    int ans = 0;
    for(auto it : coPrimePairs){
        if((mp.find(it.first) != mp.end()) && (mp.find(it.second) != mp.end())){
            ans = max(ans, (mp[it.first] + mp[it.second]));
        }
    }
    if(ans == 0){
        cout << -1 << '\n';
        return;
    }

    cout << ans << '\n';
}

int main() {
    fast_io;
    generatePairs();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}