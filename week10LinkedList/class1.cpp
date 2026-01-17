#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int value){
        this->data = value;
        this->next = NULL;
    }

};


//returns head of the new LL after insertion
Node* insertAtHead(int value , Node* &head , Node* &tail){
    //LL is empty : head and tail both NULL ko point krre hoga
    //it means we are creating first node of LL
    if(head ==NULL && tail == NULL){
        //step1: create a new node
        Node* newNode = new Node(value);
        //step2: head ko node pr lagado
        head = newNode;
        //step3: tail ko newNode pr lagado
        tail = newNode;
    }else{
        //LL is not empty
        //pehle se node present hai 
        //insert at head

        //step1: create node
        Node* newNode = new Node(value);
        //step2:connect this newnode to head node
        newNode->next = head;
        //step3:head update krdo
        head = newNode;
    }

    return head;
    
}

//return head of the updated list
void insertAtTail(int value , Node* &head , Node* &tail){
    if(head ==NULL && tail ==NULL){
        //LL is empty
        //iska mtlb abhi first node create krne jaa rahe ho LL ki
        //Steps: create node , head on that node , tail on that node
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;

    }else{
        //LL is not empty
        // step1:create node
        Node* newNode = new Node(value);
        //stap2: tail node ko new node se connect karo
        tail->next = newNode;
        //step3: tail update
        tail = newNode;
    }
}

void print(Node* head){
    Node* temp = head;
    //jab tk mere temp NULL k equal nahi h , tab tk node print krte raho
    while(temp != NULL){
        cout<<temp->data <<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;
}

int getLength(Node* head){
    int len =0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int position , int value , Node* &head , Node* &tail){
    //assume -> valid position input
    int length = getLength(head);
    if(position==1){
        //insert at ahead krna chahta hu
        head = insertAtHead(value,head,tail);
    }else if(position == length +1){
        //insert at tail chahta hu
        insertAtTail(value , head , tail);
    }else{
        //insert in between kahin krna chahta hu
        Node* temp = head;
        for(int i=0;i<position-2;i++){
            temp = temp-> next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

//searching 
int search(int target , Node* head ){
    
    //for getting exact position
    Node* temp = head;
    int length = getLength(head);
    for(int i=0;i<length;i++){
        if(temp->data == target){
            return i+1;
        }else{
            temp = temp->next;
        }
    }
    return -1;

    
    // or  -> return true or false

    // while(temp != NULL){
    //     if(temp ->data == target){
    //         return true;
    //     }
    //     temp = temp->next;
    // }
    // return false;
}
 
//deleting node
void deleteNodeFromLL(int position ,Node* &head , Node* &tail ){
    //if LL is empty
    if(head ==NULL && tail == NULL){
        cout<<"no Node to delete"<<endl;
        return ;
    }
    //single node in LL
    if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return ;
    }else{
        //multiple node inside LL
        //2 case
        //first case -> pos = 1 delete krna chahte h
        if(position ==1){
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }else{
            //any other node except first one
            Node* prev = head;
            for(int i=0;i<position-2;i++){
                prev = prev -> next;
            }
            Node* curr = prev->next;
            Node* forward = curr->next;
            prev->next = forward;
            curr->next = NULL;
            delete curr;
        }
    }

}


void deleteNodeByData(int myData , Node* &head){
    Node* curr = head->next;
    Node* prev = head;
    //if data at first node
    if(prev->data == myData){
        head = curr;
        prev->next = NULL;
    }else{
        while(curr != NULL){
            if(curr->data == myData){
                prev->next = curr->next;
                curr->next = NULL;
                break;
            }
            prev = prev->next;
            curr = curr->next;
        }
    }
}

int main(){
    //stack
    //Node first;
    //dynamic memory
    // Node* first = new Node(10);


    //insert at head

    // Node* head = NULL;
    // Node* tail = NULL;
    // //LL is empty
    // head = insertAtHead(10,head,tail);
    // print(head);
    // //10 -> NULL
    // head =insertAtHead(20,head,tail);
    // print(head);
    // //20->10->NULL
    // head =insertAtHead(30,head,tail);
    // print(head);
    // //30->20->10->NuLL



    //insert at tail

    Node* head = NULL;
    Node* tail = NULL;
    //LL is empty
    insertAtTail(101,head,tail);
    // print(head);
    //101->NULL
    insertAtTail(102,head,tail);
    // print(head);
    //101->102->NULL 
    insertAtTail(103,head,tail);
    // print(head);
    //101->102->103->NULL

    //inser at any position(n)
    // insertAtPosition(3,42,head,tail);
    print(head);

    //searching
    // cout<<search(42,head);

    //deleting any node
    // deleteNodeFromLL(3,head,tail);
    print(head);


    //delete node by data
    deleteNodeByData(103,head);
    print(head);


    return 0;
}
