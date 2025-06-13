#include<bits/stdc++.h>
using namespace std;

class SegmentTree
{
private:
	vector<int> tree; // segment tree
	int n;            // arr size
	void buildTree(vector<int> &arr, int treeInd, int left, int right)
	{
		if (left == right)
		{
			tree[treeInd] = arr[left]; // leaf node
			return;
		}
		else
		{
			int mid = left + (right - left) / 2;
			buildTree(arr, (2 * treeInd) + 1, left, mid);                      // left subtree
			buildTree(arr, (2 * treeInd) + 2, mid + 1, right);                 // right subtree
			tree[treeInd] = tree[(2 * treeInd) + 1] + tree[(2 * treeInd) + 2]; // operation
		}
	}
	
	int query(int treeInd, int left, int right, int qLeft, int qRight)
	{
		if (qRight < left || right < qRight)
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
	
	void updateEle(int treeInd, int left, int right, int arrInd, int val)
	{
		if (left == right)
		{
			tree[treeInd] = val;
		}
		else
		{
			int mid = left + (right - left) / 2;
			if (arrInd <= mid)
			{
				// need to update only left subtree
				updateEle((2 * treeInd) + 1, left, mid, arrInd, val);
			}
			else
			{
				// update only right subtree
				updateEle((2 * treeInd) + 2, mid + 1, right, arrInd, val);
			}
			tree[treeInd] = tree[(2 * treeInd) + 1] + tree[(2 * treeInd) + 2];
		}
	}

public:
	SegmentTree(vector<int> &arr)
	{
		n = arr.size();
		tree.resize(4 * n);          // segment tree size
		buildTree(arr, 0, 0, n - 1); // build segment tree
	}
	
	int rangeQuery(int qLeft, int qRight)
	{
		return query(0, 0, n - 1, qLeft, qRight);
	}
	
	// updating segment tree after changing arr[arrInd] to val
	void singleEleUpdate(int arrInd, int val)
	{
		return updateEle(0, 0, n - 1, arrInd, val);
	}
};
