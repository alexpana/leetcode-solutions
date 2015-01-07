/**
* https://oj.leetcode.com/problems/binary-tree-preorder-traversal/
*
* Note: Recursive solution is trivial, could you do it iteratively?
*/

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

#include <vector>
#include <stack>
using namespace std;

// Solution starts here

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        stack<TreeNode*> nodeStack;
        vector<int> result;

        if (root != nullptr) {
            nodeStack.push(root);
        }

        while (!nodeStack.empty()) {
            TreeNode *top = nodeStack.top();
            nodeStack.pop();

            if (top != nullptr) {
                result.push_back(top->val);
                nodeStack.push(top->right);
                nodeStack.push(top->left);
            }
        }

        return result;
    }
};