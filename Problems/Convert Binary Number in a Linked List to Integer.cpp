\/**
Solution to Convert Binary Number in a Linked List to Integer in Each Node at LeetCode in C++
author: chandresh189
ref: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
**/
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
    int getDecimalValue(ListNode* head) {
        ListNode * temp = head;
        int value=0;
        while(temp!=NULL) {
            value=value<<1;
            if(temp->val) value=value|1;
            temp=temp->next;
        }
        return value;
    }
};
