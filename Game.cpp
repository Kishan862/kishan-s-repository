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
    int zeroes = 0, ones = 0;
    for(auto ch : s){
        if(ch == '0') zeroes++;
        else ones++;
    }
    int moves = min(ones, zeroes);
    if(moves & 1){
        cout << "DA" << '\n';
    }
    else{
        cout << "NET" << '\n';
    }
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}