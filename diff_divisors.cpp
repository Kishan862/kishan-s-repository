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
vector<long long> primes;
void generatePrimes(){
    for(ll i = 2; i <= 1e5; i++){
        bool isPrime = true;
        for(ll j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primes.pb(i);
        }
    }
}
void solve() {
    ll d;
    cin >> d;

    ll p = -1;

    for(auto prime : primes){
        if(prime >= (d + 1)){
            p = prime;
            break;
        }
    }

    ll q = -1;
    for(auto prime : primes){
        if(prime >= (d + p)){
            q = prime;
            break;
        }
    }

    ll ans = min(1LL * p * p * p, 1LL * p * q);

    cout << ans << '\n';
    

}

int main() {
    fast_io;
    generatePrimes();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}