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
    int n ;
    cin >> n;
    vector<ll> weights(n);
    ll totalSum = 0;
    for(int i = 0; i < n; i++) {
        cin >> weights[i];
        totalSum += weights[i];
    }
    ll minDiff = 1e18;
    for(int mask = 0; mask < (1 << n); mask++){
        ll currSum = 0;
        for(int i = 0; i < n; i++){
            if(mask & (1 << i)){
                currSum += weights[i];
            }
        }
        ll diff = abs(totalSum - currSum - currSum);
        minDiff = min(minDiff, diff);
    }
    cout << minDiff << '\n';
    return 0;
}