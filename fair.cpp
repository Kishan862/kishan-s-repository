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
bool is_fair(ll x){
    ll temp = x;
    while(temp){
        ll digit = temp % 10;
        if(digit != 0 && x % digit != 0) return false;
        temp /= 10;
    }
    return true;
}
void solve() {
    ll n;
    cin >> n;
    while(!is_fair(n)){
        n++;
    }
    cout << n << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}