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
    while(head!=NULL)
    {
        if(s.find(head)!=s.end())
            return true;
        s.insert(head);
        head = head->next;
    }
    return false;
    /* this code is edited - the double pointer implementation of the Linked List Cycle
    ListNode* slowp;
    ListNode* fastp;
    slowp = head;
    fastp = head;
    while(slowp!=NULL)
    {
    slowp = slowp->next;
    fastp = fastp->next->next;
    if(slowp==fastp)
    {
        return true;
        break;
    }
}
    return false;
    */
}
    
};
