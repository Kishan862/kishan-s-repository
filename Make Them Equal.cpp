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
    int t;
    cin >> t;

    while (t--) {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        bool check0 = true;

        for (int i = 0; i < n; i++) {
            if (s[i] != c) {
                check0 = false;
                break;
            }
        }

        if (check0) {
            cout << 0 << '\n';
            continue;
        }

        int val1 = -1;

        for (int i = 2; i <= n; i++) {
            bool isPoss = true;

            for (int j = i; j <= n; j += i) {
                if (s[j - 1] != c) {
                    isPoss = false;
                    break;
                }
            }

            if (isPoss) {
                val1 = i;
                break;
            }
        }

        if (val1 != -1) {
            cout << 1 << '\n';
            cout << val1 << '\n';
        } else {
            cout << 2 << '\n';
            cout << n - 1 << ' ' << n << '\n';
        }
    }

    return 0;
}