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
vector<string> strings;
void generate(string s, int k) {
    if (s.size() == k) {
        strings.pb(s);
        return;
    }

    for (char c = 'a'; c <= 'z'; c++) {
        generate(s + c, k);
    }
}


void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    string MEX;
    for(auto str : strings){
        if(!(s.find(str) != string::npos)){
            MEX = str;
            break;
        }
    }
    cout << MEX << '\n';
}

int main() {
    for(int i = 1; i < 4; i++){
        generate("", i);
    }
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}