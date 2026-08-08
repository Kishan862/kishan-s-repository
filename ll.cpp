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

void solve() {
    ll n;
    cin >> n;
    cout << n << '\n';
}
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data =  data1;
        next = nullptr;
    }
};
Node* convertTOll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;

    }
    return head;    
}
void print(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;

}
Node* removesHead(Node* head){
    if(head == nullptr){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* removeTail(Node* head){
    if(head == nullptr || head->next == nullptr) return head;
    Node* temp = head;
    while(temp->next->next != nullptr) temp = temp->next;
    free(temp->next);
    temp-> next = nullptr;
    return head;
}
Node* removeKth(Node* head, int k){
    if(head == nullptr) return head;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = nullptr;
    while(temp){
        cnt++;
        if(k == cnt){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* removeEle(Node* head, int ele){
    if(head == nullptr) return head;
    Node* temp = head;
    if(head->data == ele){
        head = head->next;
        delete temp;
        return head;
    }
    Node* prev = nullptr;
    while(temp){
        if(temp->data == ele){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* insertHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}
Node* insertTail(Node* head, int val){
    if(head == nullptr) return new Node(val);
    Node* temp = head;
    while(temp->next != nullptr) temp = temp->next;
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}
Node* insertAtPos(Node* head, int val, int k){
    if(head == nullptr){
        if(k == 1){
            return new Node(val);
        }
        else{
            return head;
        }
    }
    if(k == 1){
        return new Node(val, head);
    }
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        if(cnt == k-1){
            Node* x = new Node(val, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;

}
Node* insertBeforeEle(Node* head, int val, int ele){
    if(head == nullptr){
        return nullptr;
    }
    if(head->data == ele){
        return new Node(val, head);
    }
    Node* temp = head;
    while(temp->next){
        if(temp->next->data == ele){
            Node* x = new Node(val, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;

}



int main() {
    fast_io;
    vector<int> arr = {24, 3, 4, 5};
    Node* head = convertTOll(arr);
    head = insertBeforeEle(head, 43, 24);
    print(head);
   
}