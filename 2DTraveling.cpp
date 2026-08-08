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
ll cost(ll a, ll b,  vector<pair<ll, ll>>& coordinatesOfCities){
    ll delX = abs(coordinatesOfCities[a].first - coordinatesOfCities[b].first);
    ll delY = abs(coordinatesOfCities[a].second - coordinatesOfCities[b].second);
    ll Cost = delX + delY;
    return Cost;
}
void solve() {
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    
    vector<pair<ll, ll>> coordinatesOfCities(n);

    for(int i = 0; i < n; i++){
        ll x, y;
        cin >> x >> y;
        coordinatesOfCities[i] = {x, y};
    }
    
    if(a <= k && b <= k){
        cout << 0 << '\n';
        return;
    }
    ll minCost = cost(a-1, b-1, coordinatesOfCities);
    if(k < 2){
        cout << minCost << '\n';
        return;
    }
    ll minFrom_a = LLONG_MAX, minFrom_b = LLONG_MAX;
    for(int i = 0; i < k; i++){
        minFrom_a = min(minFrom_a, cost(a-1, i, coordinatesOfCities));
        minFrom_b = min(minFrom_b, cost(b-1, i, coordinatesOfCities));
    }
    minCost = min( minFrom_a + minFrom_b, minCost);

    cout << minCost << '\n';


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}