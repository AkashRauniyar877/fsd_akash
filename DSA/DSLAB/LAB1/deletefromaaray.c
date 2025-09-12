// Akash Rauniyar
//roll no: 2400320100120
#include<stdio.h>
 void delete(int arr[],int n,int pos){
    int i;
    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n=n-1; 
    printf("The elements of array after deletion are::");
   for(i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
    }
    int main (){
    int arr[100],i,n,pos;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   printf("Enter the position of element to delete:");
   scanf("%d",&pos);
   delete(arr,n,pos);
   return 0;
}