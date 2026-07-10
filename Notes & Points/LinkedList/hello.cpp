#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List(){
        head=tail=NULL;
    }

    //push-front

    void push_front(int val){
        Node*newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }

    //push_back()

    void push_back(int val){
        Node*newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    //pop _front
    void pop_front(){
        if(head==NULL){
            return;
        }
        else{
            Node*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;

        }
    }
    // pop back

    void pop_back(){
        if(head==NULL){
            return;
        }
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    // insert in the middle of a linked list
    void insert(int val,int pos){
        if (pos<0){
            cout<<"Invalid Position"<<endl;
            return;
        }
        if(pos==0){
            push_front(val);
        }
        Node*temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Invalid Position";
            }
            temp=temp->next;
        }

        Node*newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
    //size of the linked list

    //search in a linked list 

    int ll_search(int val){
        Node*temp=head;
        int i=0;
        while(temp!=NULL){
            if(temp->data==val){
                return i;
            }
            temp=temp->next;
            i++;
        }
        return -1;
    }
    //print a linked list 
    void printf(){
        Node*temp=head;                          // the is internally this.head
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};


int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(6);
    ll.push_front (7);
    ll.push_front (9);
    ll.push_front (34);
    // ll.push_back(89);
    // ll.pop_front();
    // ll.pop_back();
    // ll.insert(4,1);
    
    ll.printf();
    cout<<endl;
    cout<<ll.ll_search(6);
    

    return 0;
}

