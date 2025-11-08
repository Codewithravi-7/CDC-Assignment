// Question Link :- https://leetcode.com/problems/design-linked-list/description/ Leetcode (707)
// Time Complexity :- 
// | Operation     | Complexity |
// | --------------| -----------|
// | get           | O(n)       |
// | addAtHead     | O(1)       |
// | addAtTail     | O(n)       |
// | addAtIndex    | O(n)       |
// | deleteAtIndex | O(n)       |

// Space Complexity :- O(n), for storing nodes

class MyLinkedList {
    private:
        struct node{
        int val;
        node* next;
    };
    node* head;
    int size;
public:
    
    MyLinkedList() {
        head = NULL;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size) return -1;

        node* p = head;
        for(int i=0; i<index; i++){
            p = p->next;
        }
        return p->val;
    }
    
    void addAtHead(int val) {
        node* newNode = new node();
        newNode->val = val;
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        if(size == 0){
            addAtHead(val);
            return;
        }
        node* newNode = new node();
        newNode->val = val;
        newNode->next = NULL;
        node* p = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = newNode;
        size++;

    }
    
    void addAtIndex(int index, int val) {
        if(index > size) return;

        if(index == 0){
            addAtHead(val);
            return;
        }
        if(index == size){
            addAtTail(val);
            return;
        }
        node* newNode = new node();
        newNode->val = val;

        node* p = head;
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        newNode->next = p->next;
        p->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size){
            return;
        }
        if(index == 0){
            node* temp = head;
            head = head->next;
            delete(temp);
            size--;
            return;
        }
        node *p = head;
        for(int i=0; i<index-1; i++){
            p = p->next;
        }
        node* delNode = p->next;
        p->next = delNode->next;
        delete(delNode);
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
