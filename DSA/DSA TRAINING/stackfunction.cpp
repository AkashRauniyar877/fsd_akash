#include<iostream>
using namespace std;

# define N 100
struct{
    int top;
    int item[N];
}s;
 void push(int x){
    if(s.top==N-1){
        cout<<"Push Not Possible"<<endl;
    }
    else{
        s.item[++s.top]= x;
    }
 }

 int pop(){
    if(s.top==N-1){
        cout<<"Pop not possible"<<endl;
    }
    else{
        return s.item[s.top--];
    }
 }



int main(){
 int i,n;
 s.top=-1;
 cout<<"Push five element"<<endl;
 for(i=0;i<5;i++){
    cin>>n;
    push(n);
 }
 cout<<"Item deleted"<<endl;
 for(i=0;i<2;i++){
    cout<<pop()<<endl;
 }




}