#include<iostream>
using namespace std;

struct decimaltohexa
{
    int decimal;
    string hexadecimal;
};
 void push(decimaltohexa s[],int &top,int decimal)
 {
     top++;
     s[top].decimal=decimal;
     s[top].hexadecimal="";
 }
 void pop(decimaltohexa s[],int &top)
 {
     top--;
 }
 bool isEmpty(int top)
 {
     return top==-1;
 }
    string toHexa(int decimal)
    {
        if(decimal==0)
        return "0";
        string hexa="";
        while(decimal>0)
        {
            int rem=decimal%16;
            if(rem<10)
            hexa=to_string(rem)+hexa;
            else
            hexa=char(rem-10+'A')+hexa;
            decimal=decimal/16;
        }
        return hexa;
    }

int main()
{
    decimaltohexa s[20];
    int top=-1;
    int decimal;
    cout<<"Enter a decimal number:";
    cin>>decimal;
    push(s,top,decimal);
    s[top].hexadecimal=toHexa(s[top].decimal);
    cout<<"Hexadecimal of "<<s[top].decimal<<" is "<<s[top].hexadecimal<<endl;
    pop(s,top);
    return 0;
}