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
    int n, x;
    cin >> n >> x;

    vector<int> pre[3];

    for(int i = 0; i < 3; i++){
        int s = 0;
        pre[i].pb(s);
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            if((s | a) != s){
                s |= a;
                pre[i].pb(s);
            }
        }
    }

    bool ans = false;

    for(auto A : pre[0]){
        for(auto B : pre[1]){
            for(auto C : pre[2]){
                if((A | B | C) == x) ans = true;
            }
        }
    }
    if(ans){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
    
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}