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
    vector<ll> a(n);

    int negs = 0;
    ll totalSum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < 0){
            negs++;
            a[i] *= -1LL;
        }

        totalSum += a[i];

    }
    if(negs & 1){
        ll mn = *min_element(all(a));
        cout << totalSum - 2 * mn << '\n';
    }
    else{
         cout << totalSum << '\n';
    }
       
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}