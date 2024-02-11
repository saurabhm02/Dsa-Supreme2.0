// https://leetcode.com/problems/merge-two-sorted-lists/

#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == NULL) {
        return list2;
    }
    if (list2 == NULL) {
        return list1;
    }

    ListNode* ans = new ListNode(-1);
    ListNode* mptr = ans;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            mptr->next = list1;
            mptr = list1;
            list1 = list1->next;
        } else {
            mptr->next = list2;
            mptr = list2;
            list2 = list2->next;
        }
    }

    if (list1 != NULL) {
        mptr->next = list1;
    }
    if (list2 != NULL) {
        mptr->next = list2;
    }

    return ans->next;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    ListNode* mergedList = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
