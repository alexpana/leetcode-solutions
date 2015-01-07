/**
* https://oj.leetcode.com/problems/linked-list-cycle/
*
* Two pointers: one fast, one slow are used to find
* cycles by using the fact that the two pointers will
* meet inside the loop.
*/

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {

        ListNode *slowIterator = head;
        ListNode *fastIterator = head;

        while (fastIterator != nullptr) {
            fastIterator = fastIterator->next;

            if (fastIterator == nullptr) return false;

            fastIterator = fastIterator->next;

            slowIterator = slowIterator->next;

            if (slowIterator == fastIterator) {
                return true;
            }
        }

        return false;
    }
};