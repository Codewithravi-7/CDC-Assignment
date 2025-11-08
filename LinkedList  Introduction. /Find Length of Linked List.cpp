// Question  Link :- https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// Time Complexity :- O(n)
// Space Complexity :- O(1)


  /*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int count = 0;
        while(head != NULL){
            head = head->next;
            count++;
        }
        return count;
    }
};
