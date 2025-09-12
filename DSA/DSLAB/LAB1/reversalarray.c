// Akash Rauniyar
//roll no: 2400320100120
#include<stdio.h>
    void reversal(int arr[],int n){
        int i,temp;
        for(i=0;i<n/2;i++){
            temp=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
        printf("The elements of array after reversal are::");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
        }
        int main (){
        int arr[100],i,n;
        printf("Enter the size of array:");
        scanf("%d",&n);
        printf("Enter the elements of array:");
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
    reversal(arr,n); //function call
    return 0;
    }