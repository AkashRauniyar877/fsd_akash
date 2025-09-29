// change this in c++

#include<iostream>

using namespace std;
int main (){
int n,num,pos;
int a[20];
cout<<"Enter the value of n:";
cin>>n;
cout<<"Enter the elements of the array:";
for (int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"Enter the position to insert the element:";
cin>>pos;
cout<<"Enter the element to insert:";
cin>>num;
for (int i=n-1;i>=pos-1;i--){
    a[i+1]=a[i];
}
a[pos-1]=num;
n++;
cout<<"Array after insertion:";
for (int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}