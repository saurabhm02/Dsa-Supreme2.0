#include<bits/stdc++.h>

using namespace std;
#define ll long long

class Node{
public:
	Node* prev;
	int data;
	Node* next;

	Node(){
		this->prev = NULL;
		this->next = NULL;
	}
	Node(int data){
		this->prev = NULL;
		this->data = data;
		this->next = NULL;
	}
};

void printll(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<endl;
}

int getLength(Node* head){
  Node* temp = head;
  int len = 0;
  while(temp != NULL){
    temp = temp->next;
    len++;
  }
  return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
  if(head != NULL){
    Node* newNode = new Node(data);
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
  }
  else{
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode; 
  }
}

void insertAtTail(Node* &head, Node* &tail, int data){
  if(head != NULL){
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
  else{
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode; 
  }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
  
  if(head != NULL){
    int len = getLength(head);
    if(position == 1){
     insertAtHead(head, tail, data); 
    }
    else if(position == len + 1){
        insertAtTail(head, tail, data);
    }
    else{
      int len = getLength(head);
      Node *newNode = new Node(data);

      Node* prevNode = NULL;
      Node* currNode = head;

      while(position != 1){
        prevNode = currNode;
        currNode = currNode->next;
        position--;
      }
      prevNode->next = newNode;
      newNode->prev = prevNode;
      newNode->next = currNode;
      currNode->prev = newNode;
    }
  }

  else{
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode; 
  }
 // O(n)
}

void deleteNode(Node* &head, Node* &tail, int position){

  if(head == NULL){
    cout<<"cannot delete, coz LL is empty"<<endl;
		return;
  }

  if(head == tail){
    Node* temp = head;
		delete temp;
		head = NULL;
		tail = NULL;
    return; 
  }

  int len = getLength(head);

  if(position == 1){
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    head->prev =NULL;
    delete temp;
  }
  else if(position == len){
    Node* prevNode = tail->prev;
    prevNode->next = NULL;
    tail->prev = NULL;
    delete tail;
    tail = prevNode;
  }
  else{
    Node* prevNode = NULL;
    Node* currNode = head;
    while(position != 1){
      prevNode = currNode;
      currNode = currNode->next;
      position--;
    }
    Node* nextNode = currNode->next;

    prevNode->next = nextNode;
    currNode->prev = NULL;
    currNode->next = NULL;
    nextNode->prev = prevNode;
    
    delete currNode;
  }

  // O(n)
  // O(1)
}


int main(){ 

	Node* head = NULL;
  Node* tail = NULL;
  insertAtHead(head, tail, 30);
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 10);
  insertAtTail(head, tail, 50);
	printll(head);

  deleteNode(head, tail, 2);
  printll(head);
    return 0;
} 