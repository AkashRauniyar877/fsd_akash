//Akash Rauniyar
//roll no: 2400320100120
#include<stdio.h>
 void missingnumber(int arr[],int n){
    int i,total=0,sum=0;
    total=n*(n+1)/2; 
    for(i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    printf("The missing number is::%d",total-sum);
 }
    int main (){
        int arr[100],i,n;
        printf("Enter the size of array:");
        scanf("%d",&n);
        printf("Enter the elements of array from 1 to %d with one missing number:",n);
        for(i=0;i<n-1;i++){
            scanf("%d",&arr[i]);
        }
    missingnumber(arr,n); //function call
    return 0;
    }