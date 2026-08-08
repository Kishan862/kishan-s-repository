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
    string s;

    cin >> s;

    int p0 = s.find('0');
    int p1 = s.find('1');

    if (p0 < p1) {
        s.erase(p0, 1);
        p1--;              
        s.erase(p1, 1);
    } else {
       s.erase(p1, 1);
       p0--;    
       s.erase(p0, 1);
    }

    cout << s << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}