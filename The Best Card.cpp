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
bool isPrime(ll x){
    for(ll i = 2; i * i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
void solve() {
    ll n;
    cin >> n;
    bool flag = isPrime(n+1);

    if(flag){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }


    
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}