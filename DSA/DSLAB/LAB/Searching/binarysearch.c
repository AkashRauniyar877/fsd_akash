#include<stdio.h>

int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == key) {
            return mid; 
        }
        if(arr[mid] < key) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return -1; 
}
int main() {
    int size = 5;
    int arr[size]; 
    printf("Enter %d elements in sorted order:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    int result = binarySearch(arr, size, key);
    
    if(result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}