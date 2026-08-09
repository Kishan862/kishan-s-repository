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
    string s;
    cin >> s;
    int n = s.size();
    int maxConsecOnes = 0, consecOnes = 0;

    for(auto ch : s){
        if(ch == '1'){
            consecOnes++;
            maxConsecOnes = max(maxConsecOnes, consecOnes);
        }
        else{
            consecOnes = 0;
        }
    }
    if(maxConsecOnes == n){
        cout << 1LL * maxConsecOnes * maxConsecOnes << '\n';
        return;
    }

    if(s[0] == '1' && s[n-1] == '1'){
        

    }

    ll ans =( (1LL * maxConsecOnes + 1) / 2 ) * ( (1LL * maxConsecOnes + 2) / 2 );
    cout << ans << '\n';
}
int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}