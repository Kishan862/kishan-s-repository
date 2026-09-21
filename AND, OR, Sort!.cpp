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
    string s;
    cin >>s;

    if(s[0] == '1'){
        int ans = 0;
        for(int i = 1; i < n; i++){
            if(s[i] == '0') ans++;
        }
        cout << ans << '\n';
        return;
    }
    else{
        int firstOne = -1;
        for(int i = 1; i < n; i++){
            if(s[i] == '1'){
                firstOne = i;
                break;
            }
        }
        if(firstOne == -1 || firstOne == n-1){
            cout << 0 << '\n';
            return;
        }

        int zerosRight = 0;
        for(int i = firstOne; i <n; i++){
            if(s[i] == '0') zerosRight++;
        }

        int onesLeft = 0;
        int ans = zerosRight;
        for(int i = firstOne; i < n; i++){
            if(s[i] == '1'){
                onesLeft++;
            }
            else{
                zerosRight--;
            }

            ans = min(ans, onesLeft + zerosRight);
        }
        cout << ans << '\n';
    }
    
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}