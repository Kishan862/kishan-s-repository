
#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    ll mx = -1;
    ll maxCnt = 0;
    ll col = -1;

    for (int i = 0; i < n; i++) {
        ll cnt = 0;
        ll first = -1, last = -1;

        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];

            if (grid[i][j] == '#') {
                cnt++;

                if (first == -1) {
                    first = j + 1;
                }

                last = j + 1;
            }
        }

        if (cnt > maxCnt) {
            maxCnt = cnt;
            mx = i + 1;
            col = (first + last) / 2;
        }
    }

    cout << mx << " " << col << '\n';
}

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
