#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value <<  endl;
    }
};

void InsertAtHead(Node* &head , int d){ // we r taking refrence here bcoz we dont want to create a copy
    
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

// to insert at the tail
void InsertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail=tail->next; // or temp
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

// insert at nth position or in middle
void InsertAtPosition(Node* &tail , Node* &head, int position , int d){

// insert at start
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int cnt =1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    // inserting at last pos
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// DELETION OF NODES

void deleteNode(int position , Node* &head){
    // deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        // memory free  start node
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < position){
            prev=curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }
}


int main(){
    // created a new node
    Node* node1 = new Node(10);
    // cout << node1 -> data << endl;  for simple ll
    // cout << node1 -> next << endl;

    // head pointed to node1
    /* Node* head = node1;
    print(head);

    InsertAtHead(head,12);
    print(head);

    InsertAtHead(head,15);
    print(head);
    */


// for tail
   Node* head = node1;
   Node* tail = node1;
    print(head);

    InsertAtTail(tail,12);
    print(head);

    InsertAtTail(tail,15);
    print(head);

// insert in between
    InsertAtPosition(tail,head,4,22);
    print(head);

    cout << " head" << head->data << endl;
    cout << "tail" << tail->data<< endl;


    deleteNode(3,head);
    print(head);
    


}