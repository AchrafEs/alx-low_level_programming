`0x1A-hash_tables`

A hash table, also known as a hash map, is a data structure that allows efficient storage and retrieval of key-value
pairs. It provides constant-time average-case complexity for insertion, deletion, and lookup operations, making it
highly efficient for handling large amounts of data.

In C, a hash table is typically implemented using an array of linked lists or a combination of arrays and linked lists.
The basic idea is to use a hash function to map each key to an index in the array, where the corresponding
value is stored. This index is often referred to as the "hash code" or "hash value."

Here's a step-by-step explanation of how a hash table can be implemented in C:

1.  Define a struct to represent a key-value pair:
```
struct KeyValuePair {
    int key;
    int value;
};
```
2.  Define the size of the hash table array and create an array of linked lists to store the key-value pairs:
```
#define TABLE_SIZE 100

struct LinkedListNode {
    struct KeyValuePair data;
    struct LinkedListNode* next;
};

struct LinkedListNode* hashTable[TABLE_SIZE];
```
3.  Implement a hash function that takes a key and returns an index in the range of the array size.
    The hash function should generate a unique index for each key to distribute the data evenly in the array:
```
int hashFunction(int key) {
    /* Your hash function implementation */
}
```
4.  Implement functions for inserting, deleting, and searching key-value pairs in the hash table:
```
void insert(int key, int value) {
    int index = hashFunction(key);
    
    struct LinkedListNode* newNode = (struct LinkedListNode*)malloc(sizeof(struct LinkedListNode));
    newNode->data.key = key;
    newNode->data.value = value;
    newNode->next = NULL;
    
    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        struct LinkedListNode* current = hashTable[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void remove(int key) {
    int index = hashFunction(key);
    
    struct LinkedListNode* current = hashTable[index];
    struct LinkedListNode* prev = NULL;
    
    while (current != NULL) {
        if (current->data.key == key) {
            if (prev == NULL) {
                hashTable[index] = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

int search(int key) {
    int index = hashFunction(key);
    
    struct LinkedListNode* current = hashTable[index];
    
    while (current != NULL) {
        if (current->data.key == key) {
            return current->data.value;
        }
        current = current->next;
    }
    
    return -1; // Key not found
}
```
Note that this is a simplified implementation to help you understand the basic concepts of a hash table.
In a real-world scenario, you would need to handle collisions (i.e., multiple keys mapping to the same index)
by using techniques like chaining or open addressing.

Remember to deallocate memory properly and handle error cases when implementing your own hash table in C.
