#include<stdio.h>
int main (){

    int n,count=0,loc;
    int a[20];
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search:");
    int key;
    scanf("%d",&key);
    for (int i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            count++;
            loc=i;
        }
    }
    if (count>0)
    {
        printf("Element found %d times at position %d",count,loc);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}