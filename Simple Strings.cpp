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
    string s;
    cin >> s;

    int n = s.size();
    vector<char> ans(n);
    ans[0] =  s[0];
    for(int i = 1; i < n; i++){
        if(s[i] == ans[i-1]){
            for(char ch = 'a'; ch <= 'z'; ch++){
                if(ch != s[i-1]){
                    if(i < n-1 && ch != s[i+1]){
                        ans[i] = ch;
                        break;
                    }
                    else if(i == n-1){
                        ans[i] = ch;
                        break;
                    }
                }
            }
        }
        else{
            ans[i] = s[i];
        }

    }

    for(int i = 0; i < n; i++){
        cout << ans[i];
    }
    cout << '\n';


}

int main() {
    fast_io;
    int t = 1;
  
    while (t--) solve();
    return 0;
}