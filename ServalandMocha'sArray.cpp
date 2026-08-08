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
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
void solve() {
    ll n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n ; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(gcd(a[i], a[j]) < 3){
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
                

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}