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
    ll n, r, b;
    cin >> n >> r >> b;
    string ans = "";
    int d = r / (b+1);
    int rem = r % (b+1);

    int p = 1;
    while(p <= b+1){
        int q = 0;
        string part = "";
        while(q < d){
            part += 'R';
            q++;
        }
        if(rem > 0){
            part += 'R';
            rem--;
        }
        if(p != b+1) part += 'B';
        ans += part;
        p++; 
    }

    cout << ans << '\n';

   
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}