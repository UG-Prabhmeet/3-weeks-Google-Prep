// Morris Preorder traversal
// O(n) time and O(1) space
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    TreeNode* curr = root;
    while (curr) {
        if (curr->left == nullptr) {
            ans.push_back(curr->val);
            curr = curr->right;
        } else {
            // finding its predecessor (rightmost node in left subtree)
            TreeNode* temp = curr->left;
            while (temp->right && temp->right != curr) {
                temp = temp->right;
            }
            if (temp->right == nullptr) {
                ans.push_back(curr->val);
                temp->right = curr; // create a link
                curr = curr->left;
            } else {
                // temp->right == curr
                temp->right = nullptr; // remove the link
                curr = curr->right;
            }
        }
    }
    return ans;
}
// only insert curr->val in PreOrder when
// curr->left == null
// (inorderPredecessor of curr->left)->right == null
