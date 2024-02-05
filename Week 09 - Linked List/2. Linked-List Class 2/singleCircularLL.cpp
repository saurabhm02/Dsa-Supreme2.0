#include<bits/stdc++.h>

using namespace std;
#define ll long long

class Node{
public:
	int data;
	Node *next;

	Node(){
		this->next = NULL;
	}
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

void printLL(Node* head){
	Node* temp = head;
	do {
		cout << temp->data << "->";
		temp = temp->next;
	} while(temp != head); 
	cout << endl;
}

int getLength(Node* head){
	Node* temp = head;
	int len = 0;
	do {
		temp = temp->next;
		len++;
	} while(temp != head);  
	return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
	if(head != NULL){
		Node* newNode = new Node(data);
		newNode->next = head;
		head = newNode;
		tail->next = head;  // Update tail's next to make it circular
	}
	else{
		Node* newNode = new Node(data);
		head = newNode;
		tail = newNode;
		head->next = head;  // Make it circular
	}
}

void insertAtTail(Node* &head, Node* &tail, int data){
	if(head != NULL){
		Node* newNode = new Node(data);
		tail->next = newNode;
		tail = newNode;
		tail->next = head;  // Update tail's next to make it circular
	}
	else{
		Node* newNode = new Node(data);
		head = newNode;
		tail = newNode;
		head->next = head;  // Make it circular
	}
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){

	int length = getLength(head);

	if(position == 1){
		insertAtHead(head, tail, data);
	}

	if(position > length + 1){
		insertAtTail(head, tail, data);
	}
	else{
		Node* newNode = new Node(data);

		Node* prev = NULL;
		Node* curr = head;

		while(position != 1){
			prev = curr;
			curr = curr->next;
			position--;
		}
		prev->next = newNode;
		newNode->next = curr;
	}
}

void deleteNode(Node* &head, Node* &tail, int position){

	int len = getLength(head);

	if(head == NULL){
		cout<<"cannot delete, coz LL is empty"<<endl;
		return;
	}
	if(head == tail){
		Node* temp = head;
		delete temp;
		head = NULL;
		tail = NULL;
	}
	if(position == 1){
		Node *temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
		tail->next = head;  // Update tail's next to make it circular
	}
	else if(position == len){
		Node* prev = head;
		while(prev-> next != tail){
			prev = prev->next;
		}
		prev->next = head;  // Update previous node's next to make it circular
		delete tail;
		tail = prev;
	} 
	else{
		Node* prev = NULL;
		Node* curr = head;

		while(position != 1){
			position--;
			prev = curr;
			curr = curr->next;
		}
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;
	}
}

int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	Node* head = NULL;
	Node* tail = NULL;

	insertAtTail(head, tail, 10);
	insertAtTail(head, tail, 20);
	insertAtTail(head, tail, 30);
	insertAtTail(head, tail, 40);
	
	printLL(head);
	deleteNode(head, tail, 4);
	printLL(head);

	return 0;
}
