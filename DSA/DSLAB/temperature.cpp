#include <iostream>
using namespace std;
int main (){

int t;
cout<<"Enter the value of Temperature in Celcius";
cin>>t;
if (t<0){
    cout<<"Freezing Weather";
}
else if (t>=0 && t<=10){
    cout<<"Very Cold Weather";
}
else if (t>10 && t<=20){
    cout<<"Cold Weather";
}
else if (t>20 && t<=30){
    cout<<"Normal Temperature";
}
else if (t>30 && t<=40){
    cout<<"Hot Weather";
}
else{
    cout<<"Very Hot Weather";
}

}