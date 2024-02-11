#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

void printLL(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp -> data<<"->";
		temp = temp -> next;
	}
	cout<<endl;
}

Node* addToNumbers(Node* head1, Node* head2) {
    Node* l1 = head1;
    Node* l2 = head2;
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    int carry = 0;
    while (l1 != NULL || l2 != NULL) {
        int sum = 0;
        if (l1 != NULL) {
            sum = sum + l1->data;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum = sum + l2->data;
            l2 = l2->next;
        }

        sum = sum + carry;
        carry = sum / 10;
        Node* newNode = new Node(sum % 10);
        temp->next = newNode;
        temp = temp->next;
    }

    if (carry > 0) {
        Node* newNode = new Node(carry);
        temp->next = newNode;
    }

    dummy = dummy->next;
    return dummy;
}

int main() {

    Node* head1 = new Node(2);
    head1->next = new Node(4);
    head1->next->next = new Node(3);
    printLL(head1);

    Node* head2 = new Node(2);
    head2->next = new Node(6);
    head2->next->next = new Node(9);
    printLL(head2);


    Node* ans = addToNumbers(head1, head2);
    printLL(ans);

    return 0;
}
