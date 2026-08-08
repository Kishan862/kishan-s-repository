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

void TOH(int n, int a, int b, int c){
    if(n == 0) return;

    TOH(n-1, a, c, b);
    cout << a << " " << c << '\n';
    TOH(n-1, b, a, c);
}

int main() {
    fast_io;
    ll n;
    cin >> n;

    cout << (1 << n)-1 << '\n';
    TOH(n, 1, 2, 3);

    return 0;
}