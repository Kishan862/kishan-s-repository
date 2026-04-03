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
const ll N = 1e5 + 1;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define all(x) (x).begin(), (x).end()
ll power(ll base, ll exponent){
    if(base == 1 || exponent == 0) return 1;
    ll ans = base % MOD;
    while (exponent)
    {
        if(exponent & 1) ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        exponent >>= 1;
    }
    return ans;
}

void solve() {
    ll a, b;
    cin >> a >> b;
    if(b > a){
        cout<<0<<endl;
        return ;
    }
    ll fact[N]; ll invFact[N];
    fact[0] = 1;
    for(int i = 1; i < N; i++){
        fact[i] = (fact[i-1] * i) % MOD;
    }
    invFact[N-1] = power(fact[N-1], MOD-2);
    for(int i = N-2; i >= 0; i--){
        invFact[i] = (invFact[i+1] * (i+1)) % MOD;
    }
    ll ans = fact[a] * invFact[b] % MOD * invFact[a-b] % MOD;
    cout<< ans <<endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}