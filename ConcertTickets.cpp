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
    ll n, m;
    cin >> n >> m;
    multiset<ll> price;
    for(int i = 0; i < n; i++){
        ll x; 
        cin >> x;
        price.insert(x);
    }
    while(m--){
        ll x;
        cin >> x;
        auto it = price.upper_bound(x);
        if(it == price.begin()){
            cout << -1 << '\n';
        }
        else{
            --it;
            cout << *it << '\n';
            price.erase(it);
        }
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}