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
    ll n, q;
    cin >> n >> q;

    vector<int> deck(n+1), queries(q+1);
    vector<int> first_pos(51, -1);
    for(int i = 1; i <= n; i++) {
        cin >> deck[i];

        if(first_pos[deck[i]] == -1){
            first_pos[deck[i]] = i;
        }
    }
    int ans;
    for(int i = 1; i <= q; i++){
        int card;
        cin >> card;

        ans = first_pos[card];

        for (int i = 1; i <= 50; i++) {
			if (first_pos[i] < ans) {
				first_pos[i]++;
			}
		}
        first_pos[card] = 1;

        cout << ans << " ";


    }

    cout << '\n';
}

int main() {
    fast_io;
    int t = 1;
    while (t--) solve();
    return 0;
}