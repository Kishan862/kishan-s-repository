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
const ll M = 998244353;
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

const int MAXN = 200000;
vector<ll> fact(MAXN + 1);

void precompute() {
    fact[0] = 1;

    for(int i = 1; i <= MAXN; i++) {
        fact[i] = fact[i - 1] * i % M;
    }
}
void solve() {
   
    string s;
    cin >> s;

    ll n = s.size();

    ll cnt = 1;
    ll op = 0;
    ll ways = 1;

    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
        else{
            op += (cnt - 1);
            ways = ways * cnt % M;
            cnt = 1;
        }
    }

    op += (cnt - 1);
    ways = ways * cnt % M;
    ways = ways * fact[op] % M;



    cout << op << " " << ways << '\n';
}

int main() {
    fast_io;
    precompute();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}