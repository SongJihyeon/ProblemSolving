//LeetCode
//234. Palindrome Linked List
//C++

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
    bool isPalindrome(ListNode* head) {
        string input = "";
        string rev = "";
        while(head != NULL){
            input += to_string(head->val);
            head = head ->next;
        }
        rev = input;
        reverse(rev.begin(), rev.end());
        if(input == rev){
            return true;
        }
        return false;
    }
};