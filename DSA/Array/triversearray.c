#include<stdio.h>
int main ()
{
int a[3];
int i;
for(i=0;i<3;i++)
{
    printf("Enter element %d: ", i+1);
    scanf("%d", &a[i]);
}
printf("Reversed array: ");
for(i=2;i>=0;i--)
{
    printf("%d ", a[i]);
}
printf("\nAkash Rauniyar");
    return 0;
}