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

class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = nullptr;
        }
};
void solve() {
    ll n, k;
    cin >> n >> k;
    Node* head = new Node(1);
    Node* temp = head, *prev, *curr = head;

    for (int i = 2; i <= n; i++) {
        temp->next = new Node(i);
        temp = temp->next;
    }
    prev = temp;
    temp->next = head;

    vector<int> ans;

    while(curr->next != curr){
        for(int i = 0; i < k; i++){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        ans.push_back(curr->data);
        delete curr;
        curr = prev->next;
    }

    ans.push_back(curr->data);

    for(auto it : ans){
        cout << it << " ";
    }

    cout << '\n';




    
}

int main() {
    fast_io;
    int t = 1;
    while (t--) solve();
    return 0;
}