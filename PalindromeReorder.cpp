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
    int n = s.size();

    map<char, int> freq;

    for(auto ch : s) freq[ch]++;
    int oddfrq = 0;
    for(auto it : freq){
        if(it.second & 1) oddfrq++;
    }
    if(!(n & 1) && oddfrq != 0){
        cout << "NO SOLUTION" << '\n';
        return;
    }
    if((n & 1) && oddfrq != 1){
        cout << "NO SOLUTION" << '\n';
        return;

    }
    string ans(n, ' ');
    int l = 0, r = n-1;
    for(auto it : freq){
        if(it.second & 1){
            ans[n/2] = it.first;
            it.second--;
        }
        for(int i = 0; i < it.second/2; i++){
            ans[l] = ans[r] = it.first;
            l++;
            r--;
        }
    }

    cout << ans << '\n';
    
}

int main() {
    fast_io;
    solve();
    return 0;
}