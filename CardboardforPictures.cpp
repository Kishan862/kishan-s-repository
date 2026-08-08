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
ll check(ll x, ll c,  vector<ll> &sideLengths){
    ll usedCardboards = 0;

    for(auto it : sideLengths){
        if(usedCardboards > c) return usedCardboards;
        usedCardboards += (it + 2*x) * (it + 2*x);
    }
    return usedCardboards;
    
}
void solve() {
    ll n, c;
    cin >> n >> c;

    vector<ll> sideLengths(n);
    for(int i = 0; i < n; i++){
        cin >> sideLengths[i]; 
    }

    ll low = 1, high = 1e10;

    while(high >= low){

        ll mid = low + (high - low)/2;

        ll cardboardUsed = check(mid, c, sideLengths);

        if(cardboardUsed == c){
            cout << mid << '\n';
            return;
        }
        else if(cardboardUsed < c){
            low = mid+1;
        }
        else{
            high = mid-1;
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