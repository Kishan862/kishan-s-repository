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
    ll a, b;
    cin >> a >> b;
    
    if(a == b){
        cout << 0 << '\n';
        return;
    }


    ll tempA = a;
    while(tempA % 2 == 0 ){
        tempA /= 2;
   
    }

    ll tempB = b;
    while(tempB % 2 == 0 ){
        tempB /= 2;
    }

    if (tempA != tempB) {
        cout << -1 << '\n';
        return;
    }else{
        a /= tempA;
        b /= tempB;
    }

    a = log2(a);
    b = log2(b);

    ll ans = ceil(abs(a-b)/3.0);
    cout << ans << '\n';

    

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}