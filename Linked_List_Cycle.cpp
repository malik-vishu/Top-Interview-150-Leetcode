//141.Linked_List_Cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> s;
        ListNode* t = head;

        while(t!=NULL && t->next!=NULL){
            if(s.find(t)!=s.end())
                return true;
            if(s.find(t)==s.end()){
                s.insert(t);
            }
            t = t->next;
        }
        return false;
    }
};
