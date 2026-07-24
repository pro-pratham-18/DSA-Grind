#include<iostream>
using namespace std;

class CircularQueue{
public:
    int currSize,cap;
    int*arr;
    int f,r;
    CircularQueue(int size){
        cap=size;
        currSize=0;
        arr=new int[cap];
        r=-1;
        f=0;
    }

    void push(int data){
        if(currSize==cap){      //full
            return;
        }
        r=(r+1)%cap;
        arr[r]=data;
        currSize++;
    }
    void pop(){
        if(currSize==0){
            return;
        }
        f=(f+1)%cap;
        currSize--;
    }
    int front(){    
        if(currSize==0) return -1;                         //just added this in the implementation       , the stl front doesnt return -1 and is called on the no empty queue
        return arr[f];                      
    }
    int back(){
        if(currSize==0) return -1;                         //just added this in the implementation       , the stl back doesnt return -1 and is called on the no empty queue
        return arr[r];
    }
    bool empty(){
        return currSize==0 ;
    }
    void printArr(){        // this prints the whole array not only the current Queue means it will contain the removed element as well as they don't get deleted , they just get shifted and updated with the new pushed element      //it is not in the order of the queue 
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
        cout <<endl;
    }
};

// we will call the front and the back functions on the non empty array 

int main(){
    CircularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);

    cq.printArr();                    // prints in the order of the array

    while(!cq.empty()){              // to print the actual queue in the order
        cout <<cq.front()<<" ";
        cq.pop();
    }
    return 0;
}