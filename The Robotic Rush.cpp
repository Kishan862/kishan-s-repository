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
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> robots(n), spikes(m);
    for (auto &x : robots) cin >> x;
    for (auto &x : spikes) cin >> x;

    string s;
    cin >> s;

    sort(spikes.begin(), spikes.end());
    vector<ll> first(2 * k + 1, INF);

    int pos = 0;
    first[k] = 0;

    for (int i = 0; i < k; i++) {
        if (s[i] == 'L') pos--;
        else pos++;

        if (first[pos + k] == INF) {
            first[pos + k] = i + 1;
        }
    }

    vector<int> dead(k + 1, 0);
    for(auto x : robots){
        ll deathTime = INF;

        auto it = lower_bound(all(spikes), x);
        if (it != spikes.end()) {
            ll d = *it - x;
            if (d <= k) {
                deathTime = min(deathTime, first[(int)d + k]);
            }
        }

        if (it != spikes.begin()) {
            --it;
            ll d = *it - x;
            if (d >= -k) {
                deathTime = min(deathTime, first[(int)d + k]);
            }
        }

        if (deathTime != INF) {
            dead[deathTime]++;
        }
    }

    int alive = n;

    for (int i = 1; i <= k; i++) {
        alive -= dead[i];
        cout << alive << (i == k ? '\n' : ' ');
    }

    
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}