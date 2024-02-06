https://leetcode.com/problems/middle-of-the-linked-list/description/

#include<bits/stdc++.h>

using namespace std;
#define ll long long

class ListNode {
public:
    int data;
    ListNode* next;
    
    ListNode(int x) : data(x), next(NULL) {}
};

// simple approach

int getLength(ListNode* head){
    int len = 0;
    ListNode* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
    // O(n)
}
ListNode* middleNode(ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    int n = getLength(head);
    int position = n/2 + 1;
    ListNode* temp = head;
    while(position != 1){
        position--;
        temp = temp->next;
    }
    return temp;
    // O(n/2)

    // O(n) + O(n/2)
}
    

// Tortoise and Hare approach
ListNode* middleNode2(ListNode* head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
    }
    return slow;
    // O(n)
}
    

void printLL(ListNode* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
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
	    head->next->next->next->next = new ListNode(5);

	    cout << "Original Linked List: ";
	    printLL(head);

	    head = middleNode(head);

	    cout << "Middle node of Linked List: ";
	    printLL(head);

    return 0;
}
