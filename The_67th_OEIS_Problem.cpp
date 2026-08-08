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
vector<ll> primes;
void seive(){
    ll limit = 2e5;
    vector<bool> is_prime(limit, true);
    is_prime[0] = is_prime[1] = false;
    for(ll i = 2; i < limit; i++){
        if(is_prime[i]){
            primes.pb(i);
            for(ll j = i*i; j < limit; j += i){
            is_prime[j] = false;
            }
        }
        
    }

}

void solve() {
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll x = primes[i] * primes[i+1];
        cout<< x <<" ";
    }
    cout<<endl;
}

int main() {
    seive();
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}