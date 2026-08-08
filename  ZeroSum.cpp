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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        bool same = true;
        int parity = 0; 

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) same = false;
            if ((a[i] ^ b[i]) && a[i]) parity ^= 1;
        }

        if (same) {
            cout << 0 << '\n';
            continue;
        }

        if (parity) {
            cout << 1 << '\n';
            continue;
        }

        bool allOnes = true;
        for (int x : b) {
            if (x == 0) {
                allOnes = false;
                break;
            }
        }

        if (allOnes) cout << -1 << '\n';
        else cout << 2 << '\n';
    }

    return 0;
}