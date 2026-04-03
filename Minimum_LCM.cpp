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
    ll ans_a;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            ans_a = n / i;
            cout<<ans_a<<" "<<(n-ans_a)<<endl;
            return ;
        }
    }
    cout<<1<<" "<<(n-1)<<endl;
}

int main() {
    fast_io;
    ll t ;
    cin >> t;
    while (t--) solve();
    return 0;
}