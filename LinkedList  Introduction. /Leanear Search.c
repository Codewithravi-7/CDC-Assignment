#include <stdio.h>

// Function for linear search in a linked list
struct Node* search(struct Node* p, int key) {
    while (p != NULL) {
        if (key == p->data) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

// Assuming p is initially set to first
struct Node* first = /* Initialize your linked list here */;

int main() {
    // Call linear search function
    struct Node* result = search(first, key);

    // Check the result and proceed with your main code...

    return 0;
}
