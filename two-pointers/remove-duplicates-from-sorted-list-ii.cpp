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
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == nullptr) {
            return nullptr;
        }

        map<int, int> mp;

        ListNode* temp = head;
        while (temp != nullptr) {
            mp[temp->val]++;
            temp = temp->next;
        }
        ListNode* curr = nullptr;
        ListNode* ans = curr;

        for (auto i : mp) {

            if (i.second == 1) {
                if(curr == nullptr){
                    curr = new ListNode(i.first);
                    ans = curr;
                }
                else{
                    ans -> next = new ListNode(i.first);
                    ans = ans -> next;
                }
            }
        }

        return curr;
    }
};