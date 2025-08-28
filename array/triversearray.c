#include<stdio.h>
int main (){

int a[5];
printf("Enter 5 elements of array: \n");
for(int i=0; i<5; i++){
    scanf("%d", &a[i]);
}
int i;

for(i=0; i<5; i++){
    printf("%d ", a[i]);
}

    return 0;
}