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


int freq[26];
int n;
vector<string> ans;

void build(string cur) {
    
    if (cur.size() == n) {
        ans.push_back(cur);
        return;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
           
            freq[i]--;

          
            build(cur + char('a' + i));

            
            freq[i]++;
        }
    }
}

int main() {
    string s;
    cin >> s;

    n = s.size();

    
    for (char ch : s) {
        freq[ch - 'a']++;
    }

    build("");

    cout << ans.size() << '\n';
    for (string p : ans) {
        cout << p << '\n';
    }

    return 0;
}