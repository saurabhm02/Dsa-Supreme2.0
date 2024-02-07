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

void addOneLL(ListNode* &head) {
    head = reverseList(head);
    int carry = 1;
    ListNode* temp = head;
    while (temp->next != NULL) {
        int totalSum = temp->val + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;

        temp->val = digit;
        temp = temp->next;
        if (carry == 0) {
            break;
        }
    }
    if (carry != 0) {
        int totalSum = temp->val + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;

        temp->val = digit;
        if (carry != 0) {
            ListNode* newNode = new ListNode(carry);
            temp->next = newNode;
        }
    }

    head = reverseList(head);
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original Linked List: ";
    printLL(head);

    addOneLL(head);

    cout << "Modified Linked List: ";
    printLL(head);

    return 0;
}
