#include <iostream>
using namespace std;
#define N 6

struct queue {
    int item[N];
    int front, rear;
} q;

void isempty(){
    if(q.front == -1){
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
}

void isfull(){
    if(q.rear==N-1){
        cout << "Queue is full" << endl;
    } else {
        cout << "Queue is not full" << endl;
    }
}

void insert(int x){
    q.item[++q.rear] = x;
}

int deletee(){
    return q.item[++q.front];
}

int main(){
    q.front =0;
    q.rear = -1;
    for(int i=1; i<=N; i++){
        insert(i*10);
    }

    cout << "Queue elements: ";
    for(int i=q.front+1; i<=q.rear; i++){
        cout << q.item[i] << " ";
    }

    cout << endl;
    cout << "Deleted element: " << deletee() << endl;
    cout << "Deleted element: " << deletee() << endl;
    cout << "Deleted element: " << deletee() << endl;
    cout << "Queue elements after deletion: ";
    for(int i=q.front+1; i<=q.rear; i++){
        cout << q.item[i] << " ";
    }
    cout << endl;
  
}