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
vector<int> ans;
void shuffle(int ind, int cnt){
    if(cnt & 1){
        for(int i = cnt; i > 0; i--){
            if(i == cnt/2 + 1){
                ans.pb(ind + i - 1);
            }
            else if(i == cnt/2){
                ans.pb(ind + i + 1);
            }
            else{
                ans.pb(ind + i);
            }
        }

    }
    else{
        for(int i = 1; i <= cnt; i++){
            if(i & 1){
                ans.pb(i + 1 + ind);
            }
            else{
                ans.pb(i - 1 + ind);
            }
        }
    }
}
void solve() {
    ans.clear();
    ll n;
    cin >> n;
    vector<int> s(n);

    for(int i = 0; i < n; i++) cin >> s[i];

    map<int, int> frq;

    for(auto x : s) frq[x]++;

    for(auto f : frq){
        if(f.second == 1){
            cout << -1 << '\n';
            return;
        }
    }
    int ind = 0;
    for(auto f : frq){
        shuffle(ind, f.second);
        ind += f.second;
    }

    for(auto x : ans){
        cout << x << " ";
    }
    cout << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}