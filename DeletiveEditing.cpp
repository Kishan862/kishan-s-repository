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
    string s, t;
    cin >> s >> t;

    int n = s.size();
    vector<int> frq(26, 0);

    for(auto ch : t) frq[ch-'A']++;

    for(int i = n-1; i >= 0; i--){
        if(frq[s[i]-'A'] > 0) frq[s[i]-'A']--;
        else s[i] = '*';
    }

    string finalStr = "";
    for(auto ch : s){
        if(ch != '*') finalStr += ch;
    }
    
    if(finalStr == t){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
}

int main() {
    fast_io;
    int n = 1;
    cin >> n;
    while (n--) solve();
    return 0;
}