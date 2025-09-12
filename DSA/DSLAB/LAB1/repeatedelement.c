//Akash Rauniyar
//roll no: 2400320100120
#include<stdio.h>
 void repeatedelement(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("The repeated element is::%d",arr[i]);
                return;
            }
        }
    }
    printf("No repeated element found");
 }
    int main (){
        int arr[100],i,n;
        printf("Enter the size of array:");
        scanf("%d",&n);
        printf("Enter the elements of array:");
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
    repeatedelement(arr,n); //function call
    return 0;
    }