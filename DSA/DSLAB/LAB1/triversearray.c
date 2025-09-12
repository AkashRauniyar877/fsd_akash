//Akash Rauniyar
//roll no: 2400320100120
#include<stdio.h>

int main(){
    int arr[100],i,n;
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
   return 0;
}