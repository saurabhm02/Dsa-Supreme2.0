// https://leetcode.com/problems/palindrome-linked-list/
#include<bits/stdc++.h>

using namespace std;
#define ll long long

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) : val(x), next(NULL) {}
};

// Function to reverse a linked list using recursion
ListNode* reverseListUsingRecursion(ListNode* prev, ListNode* curr) {
    if (curr == NULL) {
        return prev;
    }
    ListNode* nextNode = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nextNode;

    ListNode* recursionCall = reverseListUsingRecursion(prev, curr);
    return recursionCall;
    // O(n)
}

// Function to find the middle node of a linked list
ListNode* middleNode(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* slow = head;
    ListNode* fast = head;
    while (fast->next != NULL) {
        fast = fast->next;
        if (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
    // O(n)
}

// Function to compare two linked lists
bool compareLists(ListNode* head1, ListNode* head2) {
    while (head2 != NULL) {
        if (head1->val != head2->val) {
            return false;
        } else {
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    return true;
    // O(n)
}

// Function to check if a linked list is a palindrome
bool isPalindrome(ListNode* head) {
    ListNode* midNode = middleNode(head);
    ListNode* head2 = midNode->next;
    midNode->next = NULL;

    ListNode* prev = NULL;
    ListNode* curr = head2;
    head2 = reverseListUsingRecursion(prev, curr);

    bool ans = compareLists(head, head2);
    return ans;
    // O(n) + O(n) + O(n) = O(n)
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
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
        head->next->next->next = new ListNode(2);
        head->next->next->next->next = new ListNode(1);

        cout << "Original Linked List: ";
        printList(head);

        bool palindrome = isPalindrome(head);

        if (palindrome) {
            cout << "The linked list is a palindrome." << endl;
        } else {
            cout << "The linked list is not a palindrome." << endl;
        }

    return 0;
}
