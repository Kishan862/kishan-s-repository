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

void solve() {
    ll n;
    cin >> n;

    vi a(n);
    vi rem(101, 0);

    int mx = -1;
    int sum = n;

    for(auto &x : a){
        cin >> x;
        rem[x]++;
        mx = max(mx, x);
    }

    vi ans;

    while(sum > 0){
        mx = 100;

        while(mx >= 1 && rem[mx] == 0)
            mx--;

        int f = rem[mx];

        for(int i = 0; i < f; i++){
            ans.pb(mx);
            rem[mx]--;
            sum--;
        }

        for(int x = mx - 1; x >= 1; x--){
            if(rem[x] == 0)
                continue;

            int take = min(rem[x], f);

            for(int i = 0; i < take; i++){
                ans.pb(x);
                rem[x]--;
                sum--;
            }

            if(sum == 0)
                break;
        }
    }

    for(auto x : ans)
        cout << x << ' ';

    cout << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}