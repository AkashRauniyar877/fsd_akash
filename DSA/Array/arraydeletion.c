#include<stdio.h>
int main (){

int n,pos;
int a[20];
printf("Enter the number of elements in array:");
scanf("%d",&n);
printf("Enter the element of array:");
for (int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the position to delete the element:");
scanf("%d",&pos);

for(int i=pos-1;i<n-1;i++){
    a[i]=a[i+1];
}
n--;
printf("Array after deletion:");
for (int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}