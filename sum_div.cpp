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
    ll n;
    cin>>n;
    ll summ = 0;
    for(ll i = 1; i <= n; i++){
        summ = (summ + i * (n / i) % MOD) % MOD;
    }
    cout<< summ <<endl;
    return 0; 
 
 
}