// https://leetcode.com/problems/reverse-nodes-in-k-group/

#include <iostream>

using namespace std;
#define ll long long

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int value) : val(value), next(NULL) {}
};

int getLength(ListNode* head) {
    ListNode* temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void printLL(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* reverseKGroup(ListNode* head, int k) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* nextNode = curr->next;
    int position = 0;

    int len = getLength(head);
    if (len < k) {
        return head;
    }

    while (position < k) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
        position++;
    }
    ListNode* recursionCall = NULL;

    if (nextNode != NULL) {
        recursionCall = reverseKGroup(nextNode, k);
        head->next = recursionCall;
    }
    return prev;
}


int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

		ListNode* head = new ListNode(1);
	    head->next = new ListNode(2);
	    head->next->next = new ListNode(3);
	    head->next->next->next = new ListNode(4);
	    head->next->next->next->next = new ListNode(5);

	    int k = 2; 

	    cout << "Original Linked List: ";
	    printLL(head);

	    ListNode* result = reverseKGroup(head, k);

	    cout << "Reversed Linked List: ";
	    printLL(result);

    return 0;
}