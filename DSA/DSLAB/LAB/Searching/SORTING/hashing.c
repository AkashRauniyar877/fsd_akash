#include<stdio.h>

//program for Hash Table Implementation for Basic Hash Function (Without collisions)
#define TABLE_SIZE 10
int hashTable[TABLE_SIZE];
void initializeTable() {
    for(int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = -1; // -1 indicates empty slot
    }
}
int hashFunction(int key) {
    return key % TABLE_SIZE;
}
void insert(int key) {
    int index = hashFunction(key);
    if(hashTable[index] == -1) {
        hashTable[index] = key;
        printf("Inserted %d at index %d\n", key, index);
    } else {
        printf("Collision occurred for key %d at index %d\n", key, index);
    }
}
void displayTable() {
    printf("Hash Table:\n");
    for(int i = 0; i < TABLE_SIZE; i++) {
        if(hashTable[i] != -1) {
            printf("Index %d: %d\n", i, hashTable[i]);
        } else {
            printf("Index %d: Empty\n", i);
        }
    }
}
int main() {
    initializeTable();
    int n, key;
    printf("Enter number of elements to insert into hash table: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &key);
        insert(key);
    }
    displayTable();
    return 0;
}