https://leetcode.com/problems/reverse-linked-list/editorial/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

class ListNode {
public:
    int data;
    ListNode* next;
    
    ListNode(int x) : data(x), next(NULL) {}
};

// iterative Approach
ListNode* reverseList(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    while (curr != NULL) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
    // O(n)
}

// recursive aproach
ListNode* reverseListUsingRecursion(ListNode* prev, ListNode* curr){
    if(curr == NULL){
        return prev;
    }
    ListNode* nextNode = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nextNode;

    ListNode* recursionCall = reverseListUsingRecursion(prev, curr);
    return recursionCall;
}
ListNode* reverseList2(ListNode* head) {

    ListNode* prev = NULL;
    ListNode* curr = head;
    return reverseListUsingRecursion(prev, curr)//O(n)
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

	    head = reverseList(head);

	    cout << "Reversed Linked List: ";
	    printLL(head);

    return 0;
}
