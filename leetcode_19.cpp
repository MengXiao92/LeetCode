// https://leetcode-cn.com/problems/remove-nth-node-from-end-of-list/

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
        ListNode* cur = head;
        int count = 0, index = 0;
        while(cur){
            count += 1;
            cur = cur->next;
        }
        if (count == n) return head->next;
        cur = head;
        while(cur) {
            if (index == count - n - 1) {
                if (cur->next->next)
                    cur->next = cur->next->next;
                else
                    cur->next = nullptr;
            }
            index += 1;
            cur = cur->next;
        }
        return head;
    }
};
