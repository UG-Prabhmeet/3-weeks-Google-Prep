#include <bits/stdc++.h>
using namespace std;

class LazySegmentTree
{
private:
    vector<int> tree;
    vector<int> lazy; // lazy[i] - stores value of a pending update that should be applied to all elements in the segment [l, r] represented by node i
    int n; // arr size
    void buildTree(vector<int> &arr, int treeInd, int left, int right)
    {
        if (left == right)
        {
            tree[treeInd] = arr[left];
        }
        else
        {
            int mid = left + (right - left) / 2;
            buildTree(arr, (2 * treeInd) + 1, left, mid);
            buildTree(arr, (2 * treeInd) + 2, mid + 1, right);
            tree[treeInd] = tree[(2 * treeInd) + 1] + tree[(2 * treeInd) + 2];
        }
    }

    void propagate(int treeInd, int left, int right)
    {
        // there are some remaining changes to be applied
        if (lazy[treeInd] != 0)
        {
            tree[treeInd] += ((right - left + 1) * lazy[treeInd]); // total increment
            if (left != right)
            {
                lazy[(2 * treeInd) + 1] += lazy[treeInd]; // left subtree
                lazy[(2 * treeInd) + 2] += lazy[treeInd]; // right subtree
            }
            lazy[treeInd] = 0; // all changes applied to current node
        }
    }
    int query(int treeInd, int left, int right, int qLeft, int qRight)
    {
        propagate(treeInd, left, right); // apply any remaining changes
        // finding simple query
        if (qRight < left || right < qLeft)
        {
            return 0; // no overlap
        }
        if (qLeft <= left && right <= qRight)
        {
            return tree[treeInd]; // complete overlap
        }
        int mid = left + (right - left) / 2;
        int leftAns = query((2 * treeInd) + 1, left, mid, qLeft, qRight);
        int rightAns = query((2 * treeInd) + 2, mid + 1, right, qLeft, qRight);
        return leftAns + rightAns;
    }

    // updating segment Tree after lazily adding val to arr[arrLeft ....  arrRight]
    void arrRangeUpdate(int treeInd, int left, int right, int arrLeft, int arrRight, int val)
    {
        propagate(treeInd, left, right); // apply any remaining changes
        if (arrRight < left || right < arrLeft)
        {
            return; // no overlap
        }
        if (arrLeft <= left && right <= arrRight)
        {
            lazy[treeInd] += val; // lazy propagation
            propagate(treeInd, left, right);
            return;
        }
        int mid = left + (right - left) / 2;
        arrRangeUpdate((2 * treeInd) + 1, left, mid, arrLeft, arrRight, val);      // update left subtree
        arrRangeUpdate((2 * treeInd) + 2, mid + 1, right, arrLeft, arrRight, val); // update right subtree
        tree[treeInd] = tree[(2 * treeInd) + 1] + tree[(2 * treeInd) + 2];         // update curr node
    }

public:
    LazySegmentTree(vector<int> &arr)
    {
        n = arr.size();
        tree.resize(4 * n);
        lazy.resize(4 * n, 0);
        buildTree(arr, 0, 0, n - 1); // build segment tree
    }

    int rangeQuery(int qLeft, int qRight)
    {
        return query(0, 0, n - 1, qLeft, qRight);
    }

    // adding val to arr[arrLeft ....  arrRight]
    void rangeUpdate(int arrLeft, int arrRight, int val)
    {
        arrRangeUpdate(0, 0, n - 1, arrLeft, arrRight, val);
    }
};
