
// https://leetcode.com/problems/linked-list-cycle/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(NULL) {}
};
 // by using map 
bool hasCycle(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }

    map<ListNode*, bool> table;
    ListNode* temp = head;

    while (temp != NULL) {
        if (table[temp] == false) {
            table[temp] = true;
        } else {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// BY using Tortoise  

bool checkLoop(ListNode* head){
  ListNode* slow = head;
  ListNode* fast = head;

  while(fast != NULL){
    fast = fast -> next;
    if(fast != NULL){
        fast = fast -> next;
      slow = slow -> next;
    }
    if(fast == slow){
      return true;
    }
  }
  return false;

  // O(n)
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 

        ListNode* head = new ListNode(1);
        head->next = new ListNode(2);
        head->next->next = new ListNode(3);
        head->next->next->next = new ListNode(4);

        head->next->next->next->next = head->next;
        bool hasCycleResult = checkLoop(head);

        if (hasCycleResult) {
            cout << "The linked list has a cycle." << endl;
        } else {
            cout << "The linked list does not have a cycle." << endl;
        }

    return 0;
}
