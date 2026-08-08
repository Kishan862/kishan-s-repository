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

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};
Node* convertToDLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;

    }
    return head;
}
void printDLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

}
Node* removeHead(Node* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
    
}
Node* removeTail(Node* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;
    }
    Node* temp = head;
    while(temp->next) temp = temp->next;
    Node* prev = temp->back;
    prev->next = nullptr;
    prev = nullptr;
    delete temp;
    return head;


}
Node* removeKth(Node* head, int k){
    Node* temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == nullptr && front == nullptr){
        return nullptr;
    }
    else if(prev == nullptr){
        head = removeHead(head);
        return head;
    }
    else if(front == nullptr){
        head = removeTail(head);
        return head;
    }
    else{
        prev->next = front;
        front->back = prev;
        temp->next = temp->back = nullptr;
        delete temp;
        return head;
    }
    return head;
}
void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == nullptr){
        prev->next = nullptr;
        front->back = nullptr;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->back = temp->next = nullptr;
    return;

}
Node* insertHead(Node* head, int x){
    Node* newHead = new Node(x, head, nullptr);
    head->back = newHead;
    return newHead;
}
Node* insertBeforeTail(Node* head){
    
}
int main() {
    fast_io;
    vector<int> arr = {42, 64, 24, 6, 45, 456};
    Node* head = convertToDLL(arr);
    head = insertHead(head, 19);
    // deleteNode(head->next);
    // head = removeHead(head);
    // head = removeTail(head);
    // head = removeKth(head, 3);
    printDLL(head);


    return 0;
}