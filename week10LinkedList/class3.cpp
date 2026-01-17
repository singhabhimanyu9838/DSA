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

void solve(Node* head , int &carry){
    if(!head)
        return ;
    solve(head->next , carry);

    //1 case
    int sum = head->data + carry;
    int digit = sum % 10;
    carry = sum / 10;
    head->data = digit;
}

Node* add1(Node* head , int& carry){
    solve(head , carry);
    if(carry){
        Node*newHead = new Node(carry);
        newHead->next = head;
        head = newHead;
    }
    return head;
}

int main(){

    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);

    print(head);
    int carry = 1;
    head = add1(head,carry);
    print(head);


    return 0;
}