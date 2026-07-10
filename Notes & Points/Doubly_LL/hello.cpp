#include<iostream>
#include<list>
using namespace std;

class Node{
public:
    int data;
    Node*next;
    Node*prev;

    Node(int val){
        data=val;
        next=prev=NULL;
    }

    //destructor

};

class DoublyList{
    Node*head;
    Node*tail;
public:
    DoublyList(){
        head=tail=NULL;
    }
};

int main(){
    DoublyList l1;
    

    return 0;
}

