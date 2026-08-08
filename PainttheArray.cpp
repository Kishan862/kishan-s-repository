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
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        if(a[i] == a[i+1]){
            cout << 0 << '\n';
            return;
        }
    }
    vector<ll> b, c;
    for(int i = 0; i < n; i++){
        if(i & 1){
            c.pb(a[i]);
        }
        else{
            b.pb(a[i]);
        }
    }
    ll gb = 0;
    for(auto it : b){
        gb = gcd(gb, it);
    }
    ll gc = 0;
    for(auto it : c){
        gc = gcd(gc, it);
    }
    if(gb == gc){
        cout << 0 << '\n';
    }
    else if(gb == 1 || gc == 1){
        if(gb == 1){
            for(auto it : b){
                if(it % gc == 0){
                    cout << 0 << '\n';
                    return;
                }
            }
            cout << gc << '\n';
        }
        else{
            for(auto it : c){
                if(it % gb == 0){
                    cout << 0 << '\n';
                    return;
                }
            }
            cout << gb << '\n';
        }
    }
    else{
        bool isDiVB = false;
        for(auto it : b){
            if(it % gc == 0){
                isDiVB = true;
                break;
            }
        }
        bool isDiVC = false;
        for(auto it : c){
            if(it % gb == 0){
                isDiVC = true;
            }
        }
        if(isDiVB && isDiVC){
            cout << 0 << '\n';
        }
        else if(isDiVB == 0 && isDiVC == 0){
            cout << gb << '\n';
        }
        else{
            if(isDiVB){
                cout << gb << '\n';
            }
            else{
                cout << gc << '\n';
            }
        }
            
    }

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}