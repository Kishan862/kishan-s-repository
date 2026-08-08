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
bool isPalindrome(int x, vector<int> &a){
    vector<int> temp;
    for(auto e : a){
        if(e != x) temp.pb(e);
    }
    int n = temp.size();
    int r = n-1, l = 0;
    while(l <= r){
        if(temp[r] != temp[l]) return false;
        r--;
        l++;
    }
    return true;
}
void solve() {
    ll n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = n-1;

    while(l <= r){
        if(a[l] != a[r]){
            if(isPalindrome(a[l], a) || isPalindrome(a[r], a)){
                cout << "YES" << '\n';
                return;
            }
            else{
                cout << "NO" << '\n';
                return;
            }
        }
        r--;
        l++;
    }

    cout << "YES" << '\n';
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}