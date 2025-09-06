#include<stdio.h>
int main () {

int n;
int a[n];
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter the elements of the array:");
for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

    return 0;
}