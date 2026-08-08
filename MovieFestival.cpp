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
bool cmp(pair<int,int>& a, pair<int,int>& b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
void solve() {
    ll n;
    cin >> n;
    vector<pair<int, int>> timings(n);
    for(int i = 0; i < n; i++){
        cin >> timings[i].first >> timings[i].second;
    }
    sort(all(timings), cmp);
    int cnt  = 0;
    int lastEnding = 0;
    for(int i = 0; i < n; i++){
        if(timings[i].first >= lastEnding){
            cnt++;
            lastEnding = timings[i].second;
        }
    }
    cout << cnt << '\n';
    
}

int main() {
    fast_io;
    int t = 1;
    while (t--) solve();
    return 0;
}