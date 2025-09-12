#include<stdio.h>
#include<string.h>
# define N 100

struct{
    int top;
    char item[N];
}s;

 void push(int x){
    if(s.top==N-1){
        printf("Overflow");
    }
    else{
        s.item[++s.top]= x;
    }
 }

 int pop(){
    if(s.top==N-1){
        printf("Underflow");

    }
    else{
        return s.item[s.top--];
    }
 }


int main (){
s.top=-1;
int i;
char str[20];
printf("Enter string of maxlenght 20:");
scanf("%s",&str);
//push call
for(i=0;i<strlen(str);i++){
    push(str[i]); //push
}
//reverse of pop string
printf("Reverse string is::");
for(i=0;i<strlen(str);i++){
    printf("%c",pop());
}




return 0;
}