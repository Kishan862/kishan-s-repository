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

void generate(string &s, string &curr, vector<bool> &used){
    if(s.size() == curr.size()){
        cout << curr << '\n';
        return;
    }
    for(int i = 0; i < s.size(); i++){
        if(used[i]) continue;
        if (i > 0 && s[i] == s[i-1] && !used[i-1]) continue;
        used[i] = true;
        curr.pb(s[i]);
        generate(s, curr, used);
        curr.pop_back();
        used[i] = false;
    }


}
int main() {
    fast_io;
    string s;
    cin >> s;
    sort(all(s));
    vector<bool> used(s.size(), false);
    string cur;
    generate(s, cur, used);
    return 0;
}