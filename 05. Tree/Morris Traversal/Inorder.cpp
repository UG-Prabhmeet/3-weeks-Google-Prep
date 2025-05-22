// Morris Inorder traversal
// O(n) time and O(1) space
// same code as preorder, just change in insertion statement
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans;
    TreeNode* curr = root;
    while (curr) {
        if (curr->left == nullptr) {
            ans.push_back(curr->val);
            curr = curr->right;
        } else {
            // Find the inorder predecessor (rightmost node in left subtree)
            TreeNode* temp = curr->left;
            while (temp->right && temp->right != curr) {
                temp = temp->right;
            }
            if (temp->right == nullptr) {
                temp->right = curr; // create a link
                curr = curr->left;
            } else {
                // temp->right == curr
                temp->right = nullptr;    // remove the link
                ans.push_back(curr->val); ///// only change from preorder
                curr = curr->right;
            }
        }
    }
    return ans;
}
// only insert curr->val in INOrder when
// curr->left == null
// (inorderPredecessor of curr->left)->right == curr
