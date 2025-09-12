//Akash Rauniyar
//roll no: 2400320100120
#include<stdio.h>
void insert(int arr[],int n,int element){
    int i,pos;
    for(i=0;i<n;i++){
        if(arr[i]>element){
            break;
        }
    }
    pos=i;
    for(i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=element;
    n=n+1; 
    printf("The elements of array after insertion are::");
   for(i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
}
 int main (){

    int arr[100],i,n,element;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of sorted array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   printf("\nEnter the element to insert:");
   scanf("%d",&element);
   insert(arr,n,element); //function call
   return 0;
}