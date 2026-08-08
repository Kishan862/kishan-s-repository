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
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(4));

    for(int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    }

    for(int m = n; m >= 1; m--) {

        int curr = 0;

        for(int i = 0; i < n; i++) {

            int j = curr + 1;

            int l = a[i][0];
            int r = a[i][1];
            int u = a[i][2];
            int v = a[i][3];

            bool left_bad = (l <= j && j <= r);
            bool right_bad = (u <= m - j + 1 && m - j + 1 <= v);

            if(!left_bad && !right_bad) {
                curr++;
            }
        }

        if(curr >= m) {
            cout << m << '\n';
            return;
        }
    }

    cout << 0 << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}