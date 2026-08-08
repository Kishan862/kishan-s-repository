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
bool isPossible(vector<string> &input, int row, int col){
    if(input[row][col] == '*') return false;

    int r = row, c = col;
    while(r >= 0 && c >= 0){
        if(input[r][c] == 'Q') return false;
        r--;
        c--;
    }
    
    r = row;
    c = col;
    while(r >= 0){
        if(input[r][c] == 'Q') return false;
        r--;
    }

    r = row;
    c = col;
    while(r >= 0 && c < 8){
        if(input[r][c] == 'Q') return false;
        r--;
        c++;
    }

    return true;

}
void solve(int row, vector<string> &input, int &totalWays) {
    if(row == 8) {
        totalWays += 1;
        return;
    }

    for(int col = 0; col < 8; col++){
        if(isPossible(input, row, col)){
            input[row][col] = 'Q';
            solve(row+1, input, totalWays);
            input[row][col] = '.';
        }
    }
}

int main() {
    fast_io;
    vector<string> input(8);
    for(int i = 0; i < 8; i++){
        string s;
        cin >> s;
        input[i] = s;
    }
    int totalWays = 0;
    solve(0, input, totalWays);
    cout << totalWays << '\n';

    return 0;
}