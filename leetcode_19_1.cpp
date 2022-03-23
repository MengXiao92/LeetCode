/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *front = head, *behind = head;
        while(n) {
            front = front->next;
            n--;
        }
        if (front == nullptr)  return head->next;
        while(front->next){
            front = front->next;
            behind = behind->next;
        }
        behind->next = behind->next->next;
        return head;
    }
};