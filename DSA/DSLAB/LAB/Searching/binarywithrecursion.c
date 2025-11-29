#include<stdio.h>

// binary serach with recursion
int binarySearch(int arr[], int left, int right, int key) {
    if (left > right) {
        return -1; 
    }
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == key) {
        return mid; 
    }
    if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, right, key); 
    } else {
        return binarySearch(arr, left, mid - 1, key); 
    }
}
int main() {
    printf("Binary Search with Recursion\n");
    int size = 5;
    int arr[size]; 
    printf("Enter %d elements in sorted order:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int result = binarySearch(arr, 0, size - 1, key);
    
    if(result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}