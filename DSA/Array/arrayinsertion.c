#include<stdio.h>
int main (){
int n,num,pos;
int a[20];
printf("Enter the value of n:");
scanf("%d",&n);
printf("Enter the elements of the array:");
for (int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the position to insert the element:");
scanf("%d",&pos);
printf("Enter the element to insert:");
scanf("%d",&num);
for (int i=n-1;i>=pos-1;i--){
    a[i+1]=a[i];
}
a[pos-1]=num;
n++;
printf("Array after insertion:");
for (int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}