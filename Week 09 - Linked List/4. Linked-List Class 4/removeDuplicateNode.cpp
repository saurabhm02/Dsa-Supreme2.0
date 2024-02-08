// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

#include <iostream>

using namespace std;
#define ll long long

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int value) : val(value), next(NULL) {}
};

void printLL(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* deleteDuplicates(ListNode* head) {
    
    if(head == NULL || head -> next == NULL){
        return head;
    }

    ListNode* temp = head;
    while(temp != NULL){
        if(temp->next != NULL && temp->val == temp->next->val){
            ListNode* nextNode = temp->next;
            temp->next = nextNode->next;
            nextNode->next = NULL;
            delete nextNode;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
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

	    printLL(head);

	    ListNode* result = deleteDuplicates(head);

	    printLL(result);

    return 0;
}