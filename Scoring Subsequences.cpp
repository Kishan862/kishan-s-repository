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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define pb push_back
#define eb emplace_back

#define ff first
#define ss second

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vll = vector<ll>;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		vector<int> res;

		for (int i = 0; i < n; i++) {
			int l = 1, r = i + 1;

			while (l <= r) {
				int m = (l + r) / 2;

				if (a[i - m + 1] >= m) {
					l = m + 1;
				} else {
					r = m - 1;
				}
			}

			res.push_back(r);
		}

		for (auto i : res) {
			cout << i << " ";
		}
		cout << "\n";
	}

	return 0;
}