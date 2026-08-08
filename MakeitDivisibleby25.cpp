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
    vector<int> digits;
    ll temp = n;
    while(temp){
        digits.pb(temp % 10);
        temp /= 10;
    }
    int m = digits.size();
    int cnt;
    int k = 100;
    for(int i = 0; i < m; i++){
        cnt = i+1;
        if(digits[i] == 5 || digits[i] == 0){
            for(int j = i+1; j < m; j++){
                if(digits[i] == 5 && (digits[j] == 2 || digits[j] == 7)){
                    cnt += j-i-2;
                    k = min(k, cnt);
                }
                if(digits[i] == 0 && (digits[j] == 0 || digits[j] == 5)){
                    cnt += j-i-2;
                    k = min(k, cnt);
                }
            }
        }    
    }
    cout << k << '\n';

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}