//Akash Rauniyar
//roll no: 2400320100120
#include<stdio.h>

int main (){

    int arr[100],i,n,pos,element;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   printf("The elements of array are::");
   for(i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
   printf("\nEnter the position to insert element:");
   scanf("%d",&pos);
   printf("Enter the element to insert:");
   scanf("%d",&element);
   //shift right
   for(i=n-1;i>=pos-1;i--){
    arr[i+1]=arr[i];
   }
   arr[pos-1]=element;
   n=n+1; //increase size of array
   printf("The elements of array after insertion are::");
   for(i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
   return 0;
}