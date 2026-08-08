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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){  
        cin >> a[i];
    }
   
    for(int i = 1; i < 61; i++){
        ll k = 1LL << i;
        set<ll> st;
        for(auto it : a){
            it %= k;
            st.insert(it);
        }

        if(st.size() == 2){
            cout << k << '\n';
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