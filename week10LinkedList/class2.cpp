#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(int value , Node* &head , Node* &tail){
    //2 cases DLL is empty / non-empty
    //empty wala case
    if(head == NULL && tail == NULL){
        //iska mtlb , main first node create krne wala hu
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode; 
    }else{
        // DLL non empty
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;  
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"<->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void printReverse(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp->data<<"<->";
        temp = temp->prev;
    }
    cout<<"NULL"<<endl;
}

void insertAtTail(int value , Node* &head, Node* &tail){
    //2 case empty and non-empty
    if(head==NULL && tail ==NULL){
        //LL is empty
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }else{
        //LL is non-empty
        Node* newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int getLength(Node* &head){
    Node* temp = head;
    int count =0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count; 
}

void insertAtPosition(int pos , int value , Node* &head, Node* &tail ){
    int len = getLength(head);
    if(pos == 1){
        insertAtHead(value ,head,tail);
    }else if(pos == len+1){
        insertAtTail(value , head,tail);
    }else{
        Node* temp = head;
        for(int i=0;i<pos-2;i++){
            temp = temp->next;
        }
        Node* forward = temp->next;
        Node* newNode = new Node(value);
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = forward;
        forward->prev = newNode; 
    }

}

int searching(int value , Node* &head){
    Node* temp = head;
    int len = getLength(head);
    for(int i=0;i<len;i++){
        if(temp->data == value){
            return i+1;
        }
        temp = temp->next;
    }
    return -1;
}

void deleteFromPosition(int pos , Node* &head , Node* &tail){
    //LL is empty
    if(head == NULL && tail == NULL){
        cout<<"no nodes to delete"<<endl;
        return ;
    }else if (head == tail){
        //single node to delete
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }else if(pos == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }else if(pos == getLength(head)){
        Node* temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else{

        Node* backward = head;
        for(int i=0;i<pos-2;i++){
            backward = backward->next;
        }
        Node* curr = backward->next;
        Node* forward = curr->next;
        backward->next = forward;
        forward->prev = backward;
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;

    }

    
}

int main(){

    //insertAt head
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(10,head,tail);
    print(head);
    // 10<->NULL
    insertAtHead(20,head,tail);
    print(head);
    //20<->10<->NULL
    insertAtHead(30,head,tail);
    print(head);
    //30<->20<->10<->NULL

    printReverse(tail);

    //insert At tail
    insertAtTail(50,head,tail);
    print(head);


    //insertAtposition
    insertAtPosition(5 , 432,head,tail);
    print(head);

    //searching 
    int index = searching(50 , head);
    cout<<index<<endl;

    // deleteFromPosition
    deleteFromPosition(5,head,tail);
    print(head);

    return 0;
} 