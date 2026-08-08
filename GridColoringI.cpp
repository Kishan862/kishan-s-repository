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
int n, m;
vector<vector<char>> grid(n, vector<char>(m));
vector<char> colors = {'A', 'B', 'C', 'D'};
bool isPossible(int row, int col, char color){

}
bool solve(int row, int col) {
        if(row == n && col == m)  return true;
        for(int i = 0; i < 4; i++){
            if(isPossible(row, col, colors[i])){
                grid[row][col] = colors[i];
                if(solve(row+1, ))
            }
        }
}

int main() {
    fast_io;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    
    

    return 0;
}