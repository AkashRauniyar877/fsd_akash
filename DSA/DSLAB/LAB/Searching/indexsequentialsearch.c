#include<stdio.h>

int indexSequentialSearch(int arr[], int size, int key) {
    int index = key / 10; 
    if(index >= size) {
        return -1; 
    }
    
   
    for(int i = index; i < size && arr[i] / 10 == index; i++) {
        if(arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int size = 10;
    int arr[size]; 
    printf("Enter %d elements in the array (0-99):\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int result = indexSequentialSearch(arr, size, key);
    
    if(result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}