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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define pb push_back
#define eb emplace_back

#define ff first
#define ss second

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vll = vector<ll>;
vector<bool> primes(1e6+1, true);
void prime(){
    primes[0] = primes[1] = false;
    for(ll i = 2; i * i <= 1e6; i++){
        if(primes[i]){
            for(ll j = i * i; j <= 1e6; j+= i){
                primes[j] = false;
            }
        }
    }
}
void solve() {
    ll n;
    cin >> n;
    
    while(n--){
        ll x;
        cin >> x;

        ll r = sqrtl(x);

        if(r * r == x && primes[r]){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }

    }
}

int main() {
    fast_io;
    prime();
    int t = 1;
    while (t--) solve();
    return 0;
}