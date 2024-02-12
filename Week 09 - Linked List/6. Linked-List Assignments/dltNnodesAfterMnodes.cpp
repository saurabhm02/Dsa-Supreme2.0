// Delete N nodes after M nodes of a linked list
// https://www.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/0

#include <iostream>
using namespace std;


class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

void linkdelete(Node* head, int M, int N) {
    if (head == NULL) {
        return;
    }

    Node* it = head;
    for (int i = 0; i < M - 1; i++) {
        if (it == NULL) {
            return;
        }
        it = it->next;
    }

    if (it == NULL) {
        return;
    }

    Node* MthNode = it;
    it = MthNode->next;

    for (int i = 0; i < N; i++) {
        if (it == NULL) {
            break;
        }
        Node* temp = it->next;
        delete it;
        it = temp;
    }
    MthNode->next = it;

    linkdelete(it, M, N);
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
 
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
  

    int M = 2; 
    int N = 2;

    cout << "Original Linked List: ";
    printList(head);

    linkdelete(head, M, N);

    cout << "Linked List after deletion: ";
    printList(head);

    return 0;
}

