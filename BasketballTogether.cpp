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

int main() {
    fast_io;
    ll n, d;
    cin >> n >> d;
    vector<ll> power(n);
    for(int i = 0; i < n; i++) cin >> power[i];
    sort(power.begin(), power.end());
    ll l = 0, r = n-1, i = 1;
    ll cnt = 0;
    while(l <= r){
        if((i * power[r]) > d){
            cnt++;
            r--;
            i = 1;
        }
        else{
            i++;
            l++;
        }
    }
    cout << cnt << endl;

    return 0;
}