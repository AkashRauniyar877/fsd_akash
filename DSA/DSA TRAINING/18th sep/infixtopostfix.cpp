#include<iostream>
using namespace std;

class stack{
    public:
    int top;
    int size;
    char *arr;

    stack(int s){
        this->size=s;
        this->top=-1;
        arr=new char[size];
    }

    void push(char c){
        if(top==size-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{
            top++;
            arr[top]=c;
        }
    }

    char pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        else{
            char c=arr[top];
            top--;
            return c;
        }
    }

    char peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isEmpty(){
        return top==-1;
    }
};