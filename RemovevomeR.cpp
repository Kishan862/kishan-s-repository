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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    char first = s[0];
    int cnt1 = 0;
    for(auto ch : s){
        if(ch == '1') cnt1++;
    }
    int cnt0 = n-cnt1;
    int cnt = 0;
    for(auto ch : s){
        if(ch == first){
            cnt++;
        }
        else{
            if(first == '0'){
                if(cnt == cnt0){
                    cout << 2 << '\n';
                    return;
                }
                else{
                    cout << 1 << '\n';
                    return;
                }
            }
            else{
                if(cnt == cnt1){
                    cout << 2 << '\n';
                    return;
                }
                else{
                    cout << 1 << '\n';
                    return;
                }

            }

        }
    }
    cout << 1 << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}