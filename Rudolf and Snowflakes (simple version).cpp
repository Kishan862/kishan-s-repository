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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        bool ok = false;

        for (long long k = 2; k * k <= n; k++) {

            long long sum = 1 + k;
            long long power = k * k;

            while (sum + power <= n) {
                sum += power;

                if (sum == n) {
                    ok = true;
                    break;
                }

               
                if (power > n / k)
                    break;

                power *= k;
            }

            if (ok)
                break;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}