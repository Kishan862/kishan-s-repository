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
const int MAXN = 200200;
int n, m;
string arr[MAXN];
int len[MAXN], zrr[MAXN];

void build() {
    memset(zrr, 0, sizeof(*zrr) * n);
    for (int i = 0; i < n; ++i) {
        len[i] = arr[i].size();
        for (auto it = arr[i].rbegin(); it != arr[i].rend() && *it == '0'; ++it) {
            ++zrr[i];
        }
    }

}
void solve() {
    
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];
    build();
    int ans = 0;


    for(int i = 0; i < n; i++){
        ans += len[i] - zrr[i];
    }

    sort(zrr, zrr + n);
    reverse(zrr, zrr + n);

    for(int i = 0; i < n; i++){
        if(i & 1){
            ans += zrr[i];
        }
    }

    cout << (ans - 1 >= m ? "Sasha" : "Anna") << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}