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
bool check(int x){
    set<int> st;
    while(x){
        int digit = x % 10;
        if(st.count(digit)){
            return false;    
        }
        else{
            st.insert(digit);
        }
        x /= 10;
    }

    return true;
}
void solve() {
    ll n;
    cin >> n;

    int temp = n+1;
    while(true){
        if(check(temp)){
            cout << temp << '\n';
            return;
        }
        temp++;
    }
    
    
    
}

int main() {
    fast_io;
    int t = 1;
    while (t--) solve();
    return 0;
}