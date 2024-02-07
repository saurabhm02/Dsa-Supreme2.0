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
		Node* newNode = new Node(data); 
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
		tail = newNode; 
	}
	else{
		Node* newNode = new Node(data); 
		head = newNode;
		tail = newNode;  
	}
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
	}
}

Node* getStartingPointOfLoop(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
        	fast = fast -> next;
            slow = slow -> next;
        }
        if(fast == slow){
            break;
        }
    }
    // here we reached here, bcoz slow and fast meet each other
    slow = head;

    while(fast != slow){
        slow = slow -> next;
        fast = fast -> next;
    }
    return slow;

}

void removeLoop(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
        if(fast == slow){
            break;
        }
    }
    slow = head;

    while(fast != slow){
        slow = slow -> next;
        fast = fast -> next;
    }
    Node* startPoint = slow;
    Node* temp = slow;
    while(temp->next != startPoint){
      temp = temp-> next;
    }
    temp->next = NULL;
}


Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
    // O(n)
}

void addOneLL(Node* &head){
	head = reverseList(head);
	int carry = 1;
	Node* temp = head;
	while(temp -> next != NULL){
		int totalSum = temp -> data + carry; 
		int digit = totalSum % 10;
		carry = totalSum / 10;

		temp -> data = digit;
		temp = temp -> next;
		if(carry == 0){
			break;
		}
	}
	if(carry != 0){
		int totalSum = temp -> data + carry;
		int digit = totalSum % 10;
		carry = totalSum / 10;

		temp-> data = digit;
		if(carry != 0){
			Node* newNode = new Node(carry);
			temp->next = newNode;
		}
	}

	head = reverseList(head);

}




int main(){

    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	    Node *head = NULL;
	    Node *tail = NULL;
 
		insertAtHead(head, tail, 9);
		insertAtHead(head, tail, 9);
	    insertAtHead(head, tail, 9);
	    insertAtHead(head, tail, 9);
	    
	    // insertAtHead(head, tail, 50);
      	printLL(head);

	 //    tail->next = head->next->next;
      
	 //    cout<<getStartingPointOfLoop(head)->data <<endl;
		// removeLoop(head);
	 //    printLL(head);

      	cout<<endl;
      	addOneLL(head);
      	printLL(head);



	    
	    
    return 0;


}