### EASY
1. [https://leetcode.com/problems/diameter-of-binary-tree/](https://leetcode.com/problems/diameter-of-binary-tree/) pair<diameter, height> fn(root)
2. [https://leetcode.com/problems/invert-binary-tree/](https://leetcode.com/problems/invert-binary-tree/) invertedLeft = fn(root->left) , root->right = invertedLeft
3. [https://leetcode.com/problems/subtree-of-another-tree/](https://leetcode.com/problems/subtree-of-another-tree/) return (isIdentical(root, subRoot) || isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot))
4. [https://leetcode.com/problems/range-sum-of-bst/](https://leetcode.com/problems/range-sum-of-bst/) any traversal + op = root->val btw range -> ans += root->val
5. [https://leetcode.com/problems/symmetric-tree/](https://leetcode.com/problems/symmetric-tree/) isIdentical(one->left, two->right) && isIdentical(one->right, two->left);
6. [https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) mid index => root , root->left = solve(start, mid - 1, nums) , root->right = solve(mid + 1, end, nums)
7. [https://leetcode.com/problems/merge-two-binary-trees/](https://leetcode.com/problems/merge-two-binary-trees/) Node* ans = new Node(r1->val + r2->val);
        ans->l = mergeTrees(r1->l, r2->r);
8. [https://leetcode.com/problems/maximum-depth-of-binary-tree/](https://leetcode.com/problems/maximum-depth-of-binary-tree/) max(maxDepth(root->left), maxDepth(root->right)) + 1
9. [https://leetcode.com/problems/binary-tree-paths/](https://leetcode.com/problems/binary-tree-paths/) insert path in ans vector on getting leaf node 
10. [https://leetcode.com/problems/same-tree/](https://leetcode.com/problems/same-tree/) p->val == q->val && isSame(p->left, q->left) && ..
11. [https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) if (root->val > p->val && root->val > q->val) { return lowestCommonAncestor(root->left, p, q); }
12. [https://leetcode.com/problems/path-sum/](https://leetcode.com/problems/path-sum/) target -= root->val; leafNode check ; return hasPathSum(root->left, target) || .. ;
13. [https://leetcode.com/problems/minimum-absolute-difference-in-bst/](https://leetcode.com/problems/minimum-absolute-difference-in-bst/) inorderBst vector and ans = min(v[i+1] - v[i]) , second method -> prev = nullptr, inorder + op = if(prev){min(prev->val - root->val)} , prev = root 
14. [https://leetcode.com/problems/sum-of-left-leaves/](https://leetcode.com/problems/sum-of-left-leaves/) inorder + op = if (root->left && !root->left->left && !root->left->right) { ans += root->left->val; }
15. [https://leetcode.com/problems/balanced-binary-tree/](https://leetcode.com/problems/balanced-binary-tree/)  pair<isBalanced, heigth> fn(root)
16. [https://leetcode.com/problems/binary-tree-inorder-traversal/](https://leetcode.com/problems/binary-tree-inorder-traversal/)

### Medium
1. [Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/)
2. [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/)
3. [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)
4. [All Nodes Distance K in Binary Tree](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/)
5. [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)
6. [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)
7. [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/)
8. [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)
9. [Path Sum III](https://leetcode.com/problems/path-sum-iii/)
10. [Construct Binary Tree from Preorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/)
11. [Unique Binary Search Trees](https://leetcode.com/problems/unique-binary-search-trees/)
12. [Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/)
13. [Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/)
14. [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)
15. [Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/)
16. [Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/)
17. [Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)
18. [Redundant Connection](https://leetcode.com/problems/redundant-connection/)

### Hard 
1. [Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)
2. [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)
3. [Vertical Order Traversal of a Binary Tree](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/)
4. [Binary Tree Cameras](https://leetcode.com/problems/binary-tree-cameras/)
5. [Sum of Distances in Tree](https://leetcode.com/problems/sum-of-distances-in-tree/)
6. [Number of Ways to Reconstruct a Tree](https://leetcode.com/problems/number-of-ways-to-reconstruct-a-tree/)
7. [Redundant Connection II](https://leetcode.com/problems/redundant-connection-ii/)
