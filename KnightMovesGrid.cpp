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
const int INF = 1e9 + 7;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define all(x) (x).begin(), (x).end()
vector<pair<int, int>> dirs = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
int main() {
    fast_io;
    int n;
    cin >> n;
    vector<vector<int>> dis(n, vector<int>(n, INF));
    queue<pair<int, int>> q;
    dis[0][0] = 0;
    q.emplace(0, 0);

    while(! q.empty()){
        auto [row, col] = q.front();
        q.pop();
        for(auto [x, y] : dirs){
            int r = row + x;
            int c = col + y;
            if(min(r, c) >= 0 && max(r, c) < n && dis[r][c] == INF){
                dis[r][c] = dis[row][col] + 1;
                q.emplace(r, c);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << dis[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}