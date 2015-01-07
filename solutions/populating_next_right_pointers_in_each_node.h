/**
* https://oj.leetcode.com/problems/populating-next-right-pointers-in-each-node/
*
* Not constant space, since it uses recursion.
* Initial solution used a queue of pairs, but again,
* it wasn't constant space.
*/

struct TreeLinkNode {
    int val;
    TreeLinkNode *left, *right, *next;

    TreeLinkNode(int x) : val(x), left(nullptr), right(nullptr), next(nullptr) {
    }
};

class Solution {
public:

    void connectRight(TreeLinkNode *node, TreeLinkNode *right) {
        if (node != nullptr && node->next == nullptr) {
            node->next = right;
        }
    }

    void connectPair(TreeLinkNode *left, TreeLinkNode *right) {
        connectRight(left, right);
        connectRight(right, nullptr);

        if (left->left != nullptr) {
            connectPair(left->right, right->left);
            connectPair(left->left, left->right);
            connectPair(right->left, right->right);
        }
    }

    void connect(TreeLinkNode *root) {
        if (root == nullptr) {
            return;
        }

        connectRight(root, nullptr);

        if (root->left != nullptr) {
            connectPair(root->left, root->right);
        }
    }
};