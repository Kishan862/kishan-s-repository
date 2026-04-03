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
bool cmp(const pair<int,int> &a, const pair<int,int> &b){
    if(a.first != b.first)
        return a.first > b.first;   
    return a.second < b.second;    
}
void solve() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>>health;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        if(x % k == 0) health.push_back({k, i+1});
        else health.push_back({x%k, i+1});
    }
    sort(health.begin(),health.end(), cmp);
    for(auto &p : health){
        cout<<p.second<<" ";
    }
    cout<<endl;
}
int main() {
    fast_io;
    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}