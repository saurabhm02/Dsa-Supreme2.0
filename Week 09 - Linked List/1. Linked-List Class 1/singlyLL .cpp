#include<bits/stdc++.h>

using namespace std;
#define ll long long

class Node{
public:
	int data;
	Node *next;

	Node(){
		this->next = NULL;
		// cout<<"Default constructor is being called"<<endl;
	}

	Node(int data){
		this->data = data;
		this->next = NULL;
		// cout<<"Para constructor"<<endl;
	}

};

void printLL(Node* head){
	Node* temp = head;

	while(temp != NULL){
		cout<<temp->data<< "-> ";
		temp = temp->next;
	}
	cout<<endl;
}

int getLength(Node* head){
	Node* temp = head;

	int len =0;
	while(temp != NULL){
		temp = temp->next;
		len++;
	}
	return len;
}


void insertAtHead(Node* &head, Node* &tail,  int data){
	if(head != NULL){
		Node* newNode = new Node(data); // create a new node
		newNode->next = head; //  attach new node to head node
		head = newNode;  // update head
	}
	else{ // while enpty linked list

		Node* newNode = new Node(data); // create a new node
		head = newNode;  // update head
		tail = newNode;
	}
}

void insertAtTail(Node* &head, Node* &tail, int data){
	if(head != NULL){
		Node* newNode = new Node(data); // create a new node
		tail->next = newNode; //  attach new node to after tail node
		tail = newNode;  // update tail

	}
	else{
		Node* newNode = new Node(data); // create a new node
		head = newNode;
		tail = newNode;  // update tail  
	}
}

void createTail(Node* &head, Node* &tail){
	Node* temp =  head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	tail = temp; 
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){

	int length = getLength(head);

	if(position == 1){
		insertAtHead(head, tail, data);
	}
	else if(position == length + 1){
		insertAtTail(head, tail, data);
	}
	else{
		// in this section , we will insert at middle of linked list
		// using 2 pointer

		Node* newNode = new Node(data);

		Node* prev = NULL;
		Node* curr = head;
		while(position != 1){
			prev = curr;
			curr = curr->next;
			position--;
		}
		prev -> next = newNode;

		newNode -> next = curr;

		// using single pointer

		Node* newNode = new Node(data);
		Node* curr = head;
		for(int i=0; i< position-1; i++){
			curr = curr;
		}
		
		newNode ->next = curr->next;
		curr-> next = newNode;
	}
}

int main(){ 
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	    // Node a;  // -> static 
	    // Node *a = new Node();  // -> dynamically

	    // Node* first = new Node(10);
	    // Node* second = new Node(20);
	    // Node* third = new Node(30);
	    // Node* fourth = new Node(40);
	    // Node* tail = fourth;

	    // first->next = second;
	    // second->next = third;
	    // third->next = fourth;

	    // Node* head = first;
	    // cout<<"printing the entire liiked list: "<<endl;
	    // printLL(head);
	    // // cout<<"Length of LL: "<<getLength(head)<<endl; 

	    // insertAtHead(head, tail,  05);
	    // insertAtTail(head, tail,  50);
	    // printLL(head);


	    Node *head = NULL;
	    Node *tail = NULL;

		insertAtTail(head, tail, 10);
	    insertAtTail(head, tail, 20);
	    insertAtTail(head, tail, 30);
	    insertAtTail(head, tail, 40);
	    printLL(head);

	    insertAtPosition(head, tail, 25, 2);

	    printLL(head);
    return 0;


}