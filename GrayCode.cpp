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

vector<string> grayCode(int n) {

    if(n == 1) return {"0", "1"};

    vector<string> prev = grayCode(n-1);
    vector<string> ans;

    for(auto s : prev){
        ans.pb("0" + s);
    }

    for(int i = prev.size()-1; i >= 0; i--){
        ans.pb("1" + prev[i]);
    }
    return ans;
    
    
}

int main() {
    fast_io;;
    ll n;
    cin >> n;
    vector<string> ans = grayCode(n);

    for(auto it : ans){
        cout << it << '\n';
    }
    return 0;
}