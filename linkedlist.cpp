#include<iostream>
using namespace std;

// declare a linked list class

class linkedlist{
    public:
    
    int data;
    linkedlist* next;

    linkedlist(int data){
          this->data=data;
          next=NULL;
    }
};

// inserting a node at the start of the linked list

void inserthead(linkedlist* &head, int data){
    linkedlist* temp= new linkedlist(data);
    temp->next=head;
    head=temp;
}

// inserting a node at the end of the linked list

void inserttail(linkedlist* &tail,int data){
       linkedlist* temp= new linkedlist(data);
       tail->next=temp;
       tail=temp;
}

// printing the linked list

void print(linkedlist* head){
    linkedlist* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// reversing the linked list

void reverse(linkedlist* &head){
    linkedlist* current = head;
    linkedlist *prev = NULL, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}


int main(){
    linkedlist* head= new linkedlist(1);
    linkedlist* tail=head;
    inserthead(head,2);
    inserttail(tail,3);
    inserthead(head,4);
    print(head);cout<<endl;
    reverse(head);
    print(head);cout<<endl;
    
    return 0;
}