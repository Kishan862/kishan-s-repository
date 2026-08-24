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
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define pb push_back
#define eb emplace_back

#define ff first
#define ss second

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vll = vector<ll>;

vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<bool> present(upper+1, false);
        vector<vector<int>> ans;

        for(auto num : nums){
            if(num >= lower && num <= upper){
                present[num] = true;
            }
            
        }
        
        
        int i = lower;

        while(i <= upper){
            if(present[i]){
                i++;
                continue;
            }

            int start = i;
            while(i <= upper && !present[i]){
                i++;
            }
            int end = i-1;

            ans.push_back({start, end});
        }

        return ans;
        
     
        
    }

int main() {
    fast_io;
    vi nums = {3, 9, 7};
    vector<vector<int>> ans;  
    ans = findDisappearedNumbers(nums, 1, 12);

    for(auto x : ans){
        for(auto y : x){
            cout << y << " ";
        }
        cout << '\n';
    }

    return 0;
}