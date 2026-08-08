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
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> prefix(n, 0);
    if(s[0] == 'W') prefix[0]++;
    for(int i = 1; i < n; i++){
        if(s[i] == 'W'){
            prefix[i] = prefix[i-1] + 1;
        }
        else{
            prefix[i] = prefix[i-1];
        }
    }
    
    int steps = prefix[k-1];
    int minSteps = steps;
    for(int i = 1; i < n; i++){
        if(k > (n-i)) break;
        steps = prefix[k+i-1] - prefix[i-1];
        minSteps = min(steps, minSteps);
    }

    cout << minSteps << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}